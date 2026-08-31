#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D0A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    goto loc_8071D0A8;

loc_8071D0A8:
{
    r6 = 0x808A0000u;
    r5 = 0x808D0000u;
    r6 = (r6 + 8272);
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    r0 = 11;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r5 = (r5 + -27552);
    MemoryInline::FlatWrite32(r3, r5);
    r7 = r3;
    r5 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctr = r0;
}

loc_8071D0E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 20), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r7 + 20), f1.d);
    r5 = (r5 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r7 + 24), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r7 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r7 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r7 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r7 + 40), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r7 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r7 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r7 + 52), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r7 + 56), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r7 + 60), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r7 + 64), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r7 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r7 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r7 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r7 + 80), f1.d);
    r7 = (r7 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071D0E8;
    }
}

loc_8071D1F4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r4 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 20), f3.d);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 24), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 28), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 32), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWrite32((r3 + 16), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000048 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071D0A8 func_8071D0A8 preserves=true fpr_mask=0x00000000
