bs=padv.BuildService.get(pwd);
var=bs.getLastProcessModelResults;
for idx=1:length(var)
    if contains(var(idx).TaskKey, 'Actuator_Control') && var(idx).TaskState == 'Executed'
        disp(idx);
        error('Execution halted.');
    end
end    
