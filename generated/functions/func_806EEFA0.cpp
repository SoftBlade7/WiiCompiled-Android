#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EEFA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806EEFA0;

loc_806EEFA0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 6), 0, 74u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 62u, (r3 + 68));
}

loc_806EEFA8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_806EEFCC;
    }
}

loc_806EEFAC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 70u, (r3 + 76));
    r0 = (r0 * 56);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 58u, (r3 + 64));
    r6 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 48));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    goto loc_806EEFE8;
}

loc_806EEFCC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 66u, (r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 70u, (r3 + 76));
    r0 = (r0 * 56);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 58u, (r3 + 64));
    r6 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 48));
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_806EEFE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_806EEFEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_806EEFF0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806EEFF4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EF020;
    }
}

loc_806EEFFC:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 70));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r0 = (r6 * 56);
    r3 = (r8 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r6));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806EF020:
{
    r7 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 6));
    r10 = 0;
    ctr = r7;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_806EF030:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_806EF034:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 70));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + -1);
}

loc_806EF040:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806EF048;
    }
}

loc_806EF044:
{
    r0 = (r7 + -1);
}

loc_806EF048:
{
    r11 = (r0 - r10);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_806EF054;
    }
}

loc_806EF050:
{
    r11 = (r11 + r7);
}

loc_806EF054:
{
    r9 = (r11 * 56);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 70u, (r3 + 76));
    r6 = (r0 + r9);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806EF06C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806EF090;
    }
}

loc_806EF074:
{
    r3 = (r8 + r9);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r11));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806EF090:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806EF034;
    }
}

loc_806EF098:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FC9 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EEFA0 func_806EEFA0 preserves=true fpr_mask=0x00000000
