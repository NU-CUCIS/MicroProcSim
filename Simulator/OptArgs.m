function opts = OptArgs(optkeys, optargs)

opts    = struct(optkeys{:});
optargs = reshape(optargs, [2 length(optargs)/2]);
%
for k=1:size(optargs, 2)
  %
  key = optargs{1, k};
  val = optargs{2, k};
  %
  if (isfield(opts, key))
    opts.(key) = val;
  else
    warning('OptArgs:NoKey', ['no such option:  ', key])
  end
end
