#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D6A0_statefree(uint32_t);

extern "C" void func_8071BE1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    goto loc_8071BE1C;

loc_8071BE1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 8272);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8071D6A0u) && KnownTranslatedCpuCall<0x8071D6A0u>::kAvailable && !KnownTranslatedCpuCall<0x8071D6A0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8071D6A0u>()) {
        func_8071D6A0_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8071D6A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r4 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = 11;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r5 = MemoryInline::FlatRead32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    MemoryInline::FlatWrite32((r5 + 28), r4);
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r4));
    r5 = MemoryInline::FlatRead32((r6 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    MemoryInline::FlatWrite32((r5 + 28), r4);
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 16), f2.d);
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    MemoryInline::FlatWrite32((r5 + 28), r4);
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r4));
    r5 = MemoryInline::FlatRead32((r6 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    MemoryInline::FlatWrite32((r5 + 28), r4);
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 16), f2.d);
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r3 = r4;
    MemoryInline::FlatWriteFloat32((r4 + 12), f2.d);
    ctr = r0;
}

loc_8071BF18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 20), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 20), f1.d);
    r7 = (r7 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 24), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 40), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 52), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 56), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 60), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 64), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 80), f1.d);
    r3 = (r3 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071BF18;
    }
}

loc_8071C024:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r3 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 20), f3.d);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071BE1C func_8071BE1C preserves=true fpr_mask=0x00000000
