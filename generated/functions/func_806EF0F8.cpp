#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EF0F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_806EF158_loc_0 = 0;
    uint32_t addr_lfsx_806EF1A4_loc_0 = 0;
    uint32_t addr_lfsx_806EF1DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EF0F8;

loc_806EF0F8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 68), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 68));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EF104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EF11C;
    }
}

loc_806EF108:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 80));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r7);
    r8 = (r0 & 65535);
    goto loc_806EF12C;
}

loc_806EF11C:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 80));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r7);
    r8 = (r0 & 65535);
}

loc_806EF12C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 80));
    r5 = 0x808A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r5 + 2836));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 262140);
    r4 = (r4 + -1);
    r9 = 0;
    r10 = 0;
    goto loc_806EF188;
}

loc_806EF14C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 88));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 262140);
    r0 = (r0 + r5);
    addr_lfsux_806EF158_loc_0 = (r6 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsux_806EF158_loc_0);
    r6 = addr_lfsux_806EF158_loc_0;
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_806EF160:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EF184;
    }
}

loc_806EF168:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806EF170:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806EF184;
    }
}

loc_806EF174:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    r9 = r10;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
}

loc_806EF184:
{
    r10 = (r10 + 1);
}

loc_806EF188:
{
    r0 = (r10 & 65535);
}

loc_806EF190:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_806EF14C;
    }
}

loc_806EF194:
{
    r4 = (r8 + r7);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 88));
    r0 = (r4 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_806EF1A4_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806EF1A4_loc_0);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806EF1AC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EF1EC;
    }
}

loc_806EF1B4:
{
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 2832));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_806EF1C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EF1EC;
    }
}

loc_806EF1C8:
{
    r4 = (r8 + r7);
    r5 = (r7 + -1);
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r9 = (r5 & 65535);
    addr_lfsx_806EF1DC_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806EF1DC_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_806EF1EC:
{
    r5 = (r9 & 65535);
    r0 = 1127219200;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 2856));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 84));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007F3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EF0F8 func_806EF0F8 preserves=true fpr_mask=0x00000000
