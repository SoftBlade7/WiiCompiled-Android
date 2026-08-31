#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80192F74_statefree(uint32_t, uint32_t);

extern "C" void func_8017728C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8017728C;

loc_8017728C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80250000u;
    r31 = (r31 + 10056);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead32((r3 + 18744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801772BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017738C;
    }
}

loc_801772C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801772C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801772D8;
    }
}

loc_801772D0:
{
    r29 = -904;
    goto loc_801772FC;
}

loc_801772D8:
{
    ctx->lr = 0x801772DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r29 = fctiwzword0;
}

loc_801772FC:
{
}

loc_80177300:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(60))) {
        goto loc_80177308;
    }
}

loc_80177304:
{
    r29 = 60;
}

loc_80177308:
{
}

loc_8017730C:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(-904))) {
        goto loc_80177314;
    }
}

loc_80177310:
{
    r29 = -904;
}

loc_80177314:
{
    r28 = 0;
    r30 = 0;
    r31 = 0x80340000u;
}

loc_80177320:
{
    r0 = MemoryInline::FlatRead32((r31 + 18744));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 11804));
}

loc_80177330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017733C;
    }
}

loc_80177334:
{
    r4 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80192F74u) && KnownTranslatedCpuCall<0x80192F74u>::kAvailable && !KnownTranslatedCpuCall<0x80192F74u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80192F74u>()) {
        const auto state_free_result_80192F74_EA7 = func_80192F74_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80192F74_EA7[0]);
        r3 = static_cast<uint32_t>(state_free_result_80192F74_EA7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80192F74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8017733C:
{
    r28 = (r28 + 1);
    r30 = (r30 + 11820);
}

loc_80177348:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_80177320;
    }
}

loc_8017734C:
{
    r28 = 0;
    r30 = 0;
    r31 = 0x80340000u;
}

loc_80177358:
{
    r3 = MemoryInline::FlatRead32((r31 + 18744));
    r0 = (r3 + 65536);
    r3 = (r0 + r30);
    r3 = (r3 + -18256);
    r0 = MemoryInline::FlatRead8((r3 + 11804));
}

loc_80177370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017737C;
    }
}

loc_80177374:
{
    r4 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80192F74u) && KnownTranslatedCpuCall<0x80192F74u>::kAvailable && !KnownTranslatedCpuCall<0x80192F74u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80192F74u>()) {
        const auto state_free_result_80192F74_15E1 = func_80192F74_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80192F74_15E1[0]);
        r3 = static_cast<uint32_t>(state_free_result_80192F74_15E1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80192F74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8017737C:
{
    r28 = (r28 + 1);
    r30 = (r30 + 11820);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_80177388:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80177358;
    }
}

loc_8017738C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00021FF gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x80001FFF fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017728C func_8017728C preserves=true fpr_mask=0x00000000
