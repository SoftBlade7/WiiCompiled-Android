#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063D194(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8063D194;

loc_8063D194:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = MemoryInline::FlatRead32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 1008));
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 76u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8063D1BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063D1F4;
    }
}

loc_8063D1C0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 28));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 76), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    goto loc_8063D214;
}

loc_8063D1F4:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 28));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 52));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
}

loc_8063D214:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 48));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 44u, (r3 + 72));
    r5 = (r5 + 1);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 36));
    r0 = (r4 + 1);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 60));
    r4 = (r5 * r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 64));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 44));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 68));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    r0 = (r4 + -1);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWriteFloat32((r3 + 84), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8063D194 func_8063D194 preserves=true fpr_mask=0x00000000
