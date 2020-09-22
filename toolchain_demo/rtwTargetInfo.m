function rtwTargetInfo(tr)
%RTWTARGETINFO Registration file for custom toolchains.

% Copyright 2012-2016 The MathWorks, Inc.

tr.registerTargetInfo(@loc_createToolchain);

end

% -------------------------------------------------------------------------
% Create the ToolchainInfoRegistry entries
% -------------------------------------------------------------------------
function config = loc_createToolchain

config(1)                       = coder.make.ToolchainInfoRegistry;
config(1).Name                  = 'Intel v14 | nmake makefile (64-bit Windows)';
config(1).FileName              = fullfile(fileparts(mfilename('fullpath')), 'intel_tc.mat');
config(1).TargetHWDeviceType    = {'*'};
config(1).Platform              =  {computer('arch')};

end
