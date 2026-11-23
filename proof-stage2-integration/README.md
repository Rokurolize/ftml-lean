# Root integration verification for the Stage 2 proof package
This directory holds root-owned harnesses used to independently check the delivered units after integration. It is not a sub-agent write scope. The differential harness compares the original `stage2/stage2-model/Stage2.lean` transform against the totalized `Stage2TidyCore.transformTotal` on a deterministic corpus.
