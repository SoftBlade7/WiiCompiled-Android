#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8063D3CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8063D3CC;

loc_8063D3CC:
{
    r6 = MemoryInline::FlatRead32((r3 + 100));
    r7 = MemoryInline::FlatRead32((r6 + 8));
}

loc_8063D3D8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8063D464;
    }
}

loc_8063D3DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 40));
    r4 = MemoryInline::FlatRead8((r3 + 24));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 28));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r5 = (r4 + 1);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r7 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 32));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 40));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 44));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r4 = MemoryInline::FlatRead8((r4 + 48));
    r0 = (r4 + 1);
    r4 = (r5 * r0);
    r0 = (r4 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    goto loc_8063D494;
}

loc_8063D464:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 28), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
}

loc_8063D494:
{
    r4 = MemoryInline::FlatRead32((r3 + 100));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8063D4A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063D4D8;
    }
}

loc_8063D4A4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 76), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    goto loc_8063D4F8;
}

loc_8063D4D8:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
}

loc_8063D4F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 37u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 48));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r3 + 72));
    r5 = (r5 + 1);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 36));
    r0 = (r4 + 1);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 60));
    r4 = (r5 * r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 64));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 44));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 68));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    r0 = (r4 + -1);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWriteFloat32((r3 + 84), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    r3 = (r3 + 104);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805C2A5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00007DA gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00003FE0 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8063D3CC func_8063D3CC preserves=true fpr_mask=0x00000000
