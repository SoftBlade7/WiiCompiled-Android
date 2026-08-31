#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F041C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806F0438_loc_0 = 0;
    uint32_t addr_lfsx_806F0454_loc_0 = 0;
    uint32_t addr_lfsx_806F04D0_loc_0 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F041C;

loc_806F041C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 6), 0, 86u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 62u, (r3 + 68));
}

loc_806F0424:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_806F0444;
    }
}

loc_806F0428:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 82u, (r3 + 88));
    r0 = (r0 * 20);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 58u, (r3 + 64));
    addr_lfsx_806F0438_loc_0 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806F0438_loc_0);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    goto loc_806F045C;
}

loc_806F0444:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 66u, (r3 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 82u, (r3 + 88));
    r0 = (r0 * 20);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 58u, (r3 + 64));
    addr_lfsx_806F0454_loc_0 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806F0454_loc_0);
    f2.d = PpcFmulsInline(f2.d, f0.d);
}

loc_806F045C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806F0460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_806F0464:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806F0468:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F0494;
    }
}

loc_806F0470:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 70));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r0 = (r6 * 20);
    r3 = (r7 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806F0494:
{
    r8 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 6));
    r9 = 0;
    ctr = r8;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_806F04A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_806F04A8:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 70));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r6 + -1);
}

loc_806F04B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_806F04BC;
    }
}

loc_806F04B8:
{
    r0 = (r8 + -1);
}

loc_806F04BC:
{
    r10 = (r0 - r9);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_806F04C8;
    }
}

loc_806F04C4:
{
    r10 = (r10 + r8);
}

loc_806F04C8:
{
    r0 = (r10 * 20);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 82u, (r3 + 88));
    addr_lfsx_806F04D0_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806F04D0_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806F04DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F0500;
    }
}

loc_806F04E4:
{
    r3 = (r7 + r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r10));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806F0500:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806F04A8;
    }
}

loc_806F0508:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007C9 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F041C func_806F041C preserves=true fpr_mask=0x00000000
