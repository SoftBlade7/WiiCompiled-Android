#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D2A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    goto loc_8071D2A0;

loc_8071D2A0:
{
    r5 = 0x808A0000u;
    r0 = 11;
    r5 = (r5 + 8272);
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r6 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    ctr = r0;
}

loc_8071D2C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 20), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r4 + 20), f1.d);
    r6 = (r6 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r4 + 24), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r4 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r4 + 40), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r4 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r4 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r4 + 52), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r4 + 56), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r4 + 60), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r4 + 64), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r4 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r4 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r4 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r4 + 80), f1.d);
    r4 = (r4 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071D2C4;
    }
}

loc_8071D3D0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 20), f3.d);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071D2A0 func_8071D2A0 preserves=true fpr_mask=0x00000000
