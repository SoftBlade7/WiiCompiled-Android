#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A1660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806A1660;

loc_806A1660:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 1074855936;
    r10 = (r5 & 1073741824);
}

loc_806A1670:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r7 + -28672);
    r7 = (r5 & r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = (0 - r7);
    r0 = (r0 | r7);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r7 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_806A16AC;
    }
}

loc_806A16A0:
{
}

loc_806A16A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(1))) {
        goto loc_806A16AC;
    }
}

loc_806A16A8:
{
    r7 = 1;
}

loc_806A16AC:
{
    r0 = (r5 & 4096);
}

loc_806A16B0:
{
    r8 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A16C4;
    }
}

loc_806A16B8:
{
}

loc_806A16BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_806A16C4;
    }
}

loc_806A16C0:
{
    r8 = 1;
}

loc_806A16C4:
{
    r0 = (r5 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A16C8:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A16E4;
    }
}

loc_806A16D0:
{
}

loc_806A16D4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_806A16E0;
    }
}

loc_806A16D8:
{
}

loc_806A16DC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_806A16E4;
    }
}

loc_806A16E0:
{
    r0 = 1;
}

loc_806A16E4:
{
    r4 = (r4 | r0);
    r0 = (r5 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A16EC:
{
    r0 = (0 - r4);
    r5 = 0;
    r0 = (r0 | r4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A170C;
    }
}

loc_806A1700:
{
}

loc_806A1704:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(7))) {
        goto loc_806A170C;
    }
}

loc_806A1708:
{
    r5 = 1;
}

loc_806A170C:
{
}

loc_806A1710:
{
    r9 = 0;
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_806A1724;
    }
}

loc_806A1718:
{
}

loc_806A171C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(3))) {
        goto loc_806A1724;
    }
}

loc_806A1720:
{
    r9 = 1;
}

loc_806A1724:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_806A1728:
{
    r10 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A173C;
    }
}

loc_806A1730:
{
}

loc_806A1734:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_806A173C;
    }
}

loc_806A1738:
{
    r10 = 1;
}

loc_806A173C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806A1740:
{
    r5 = 1;
    r0 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A1754;
    }
}

loc_806A174C:
{
}

loc_806A1750:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_806A1758;
    }
}

loc_806A1754:
{
    r0 = 1;
}

loc_806A1758:
{
}

loc_806A175C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A176C;
    }
}

loc_806A1760:
{
}

loc_806A1764:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_806A176C;
    }
}

loc_806A1768:
{
    r5 = 0;
}

loc_806A176C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_806A1770:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A17F0;
    }
}

loc_806A1774:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_806A1778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1788;
    }
}

loc_806A177C:
{
    r3 = r30;
    ctx->lr = 0x806A1784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806A66A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806A17F0;
}

loc_806A1788:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806A178C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A17F0;
    }
}

loc_806A1790:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806A1794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A17F0;
    }
}

loc_806A1798:
{
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r31 & 255);
    r4 = (r0 * 48);
    r3 = MemoryInline::FlatRead32((r30 + 1968));
    r5 = MemoryInline::FlatRead32((r5 + 140));
    r0 = (r3 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1956));
    r3 = (r5 + r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 1960));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1964));
    MemoryInline::FlatWriteFloat32((r30 + 1956), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 1960), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWrite32((r30 + 1968), r0);
    MemoryInline::FlatWriteFloat32((r30 + 1964), f0.d);
}

loc_806A17F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A1660 func_806A1660 preserves=true fpr_mask=0x00000000
