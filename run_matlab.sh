#!/bin/bash

matlab \
-nodesktop \
-logfile output.log \
-batch "openProject(pwd);
        runprocess(Tasks = \
        {
          'padv.builtin.task.GenerateSimulinkWebView|sl_model_file|ProcessAdvisorExample|02_Models/AHRS_Voter/specification/AHRS_Voter.slx',
          'padv.builtin.task.GenerateSimulinkWebView|sl_model_file|ProcessAdvisorExample|02_Models/Actuator_Control/specification/Actuator_Control.slx',
          'padv.builtin.task.GenerateSimulinkWebView|sl_model_file|ProcessAdvisorExample|02_Models/Flight_Control/specification/Flight_Control.slx',
          'padv.builtin.task.GenerateSimulinkWebView|sl_model_file|ProcessAdvisorExample|02_Models/InnerLoop_Control/specification/InnerLoop_Control.slx',
          'padv.builtin.task.GenerateSimulinkWebView|sl_model_file|ProcessAdvisorExample|02_Models/OuterLoop_Control/specification/OuterLoop_Control.slx'
        }, 
        Force = false, 
        ExitInBatchMode = true, 
        RerunFailedTasks = false, 
        RerunErroredTasks = false, 
        GenerateJUnitForProcess = true);"
