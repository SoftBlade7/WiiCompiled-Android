#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8073F4D4_statefree(uint32_t);

extern "C" void func_80743E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80743E80;

loc_80743E80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8073F4D4u) && KnownTranslatedCpuCall<0x8073F4D4u>::kAvailable && !KnownTranslatedCpuCall<0x8073F4D4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8073F4D4u>()) {
        const auto state_free_result_8073F4D4_4C9 = func_8073F4D4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8073F4D4_4C9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8073F4D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80743EB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80743EE4;
    }
}

loc_80743EBC:
{
    r4 = 0x808D0000u;
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -19184));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11072));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 36), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80743EDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80743EE4;
    }
}

loc_80743EE0:
{
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
}

loc_80743EE4:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -19120));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80743E80 func_80743E80 preserves=true fpr_mask=0x00000000
