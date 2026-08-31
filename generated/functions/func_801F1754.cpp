#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F1754(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F1754;

loc_801F1754:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1760:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1778;
    }
}

loc_801F1770:
{
    r3 = 1;
    goto loc_801F198C;
}

loc_801F1778:
{
    r8 = (r3 & 255);
    r0 = (r3 & 65280);
}

loc_801F1784:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(26))) {
        goto loc_801F1790;
    }
}

loc_801F1788:
{
}

loc_801F178C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_801F1798;
    }
}

loc_801F1790:
{
    r0 = 1;
    goto loc_801F1824;
}

loc_801F1798:
{
    r4 = (r8 * 56);
    r5 = 0x80360000u;
    r0 = 13;
    r5 = (r5 + -23936);
    r4 = (r5 + r4);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & 65535);
    r6 = (r4 + 420);
    r4 = 0;
    ctr = r0;
}

loc_801F17BC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F17CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F17DC;
    }
}

loc_801F17D0:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F17D8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F1808;
    }
}

loc_801F17DC:
{
    r4 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r9 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r9 + 8));
}

loc_801F17F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_801F1800;
    }
}

loc_801F17F4:
{
    r0 = MemoryInline::FlatRead32((r9 + 4));
}

loc_801F17FC:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_801F1808;
    }
}

loc_801F1800:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F17BC;
    }
}

loc_801F1808:
{
    r5 = (r4 & 65535);
    r4 = 26;
    r0 = (r5 + -26);
    r4 = (r5 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r4 - r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_801F1824:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1834;
    }
}

loc_801F182C:
{
    r3 = r0;
    goto loc_801F198C;
}

loc_801F1834:
{
    r0 = (r8 * 56);
    r4 = 0x80360000u;
    r5 = (r4 + -23936);
    r4 = (r5 + r0);
    r30 = (r4 + 420);
    r4 = MemoryInline::FlatRead32((r4 + 420));
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1850:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F185C;
    }
}

loc_801F1854:
{
    r3 = 13;
    goto loc_801F198C;
}

loc_801F185C:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F1864:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1870;
    }
}

loc_801F1868:
{
    r3 = 13;
    goto loc_801F198C;
}

loc_801F1870:
{
    r0 = 13;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 65535);
    r4 = 0;
    ctr = r0;
}

loc_801F1880:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & 524280);
    r7 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
}

loc_801F1890:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_801F18A0;
    }
}

loc_801F1894:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
}

loc_801F189C:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_801F18CC;
    }
}

loc_801F18A0:
{
    r4 = (r4 + 1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 524280);
    r7 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
}

loc_801F18B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_801F18C4;
    }
}

loc_801F18B8:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
}

loc_801F18C0:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_801F18CC;
    }
}

loc_801F18C4:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F1880;
    }
}

loc_801F18CC:
{
    r0 = (r4 & 65535);
}

loc_801F18D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(26))) {
        goto loc_801F18E0;
    }
}

loc_801F18D8:
{
    r0 = 1;
    goto loc_801F18E8;
}

loc_801F18E0:
{
    r31 = r4;
    r0 = 0;
}

loc_801F18E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F18EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F18F8;
    }
}

loc_801F18F0:
{
    r3 = r0;
    goto loc_801F198C;
}

loc_801F18F8:
{
    r0 = MemoryInline::FlatRead16((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F1900:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1938;
    }
}

loc_801F1904:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 4));
    ctr = r12;
    ctx->lr = 0x801F1914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801F1918:
{
    r4 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F1938;
    }
}

loc_801F1920:
{
    r3 = MemoryInline::FlatRead32((r30 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1930;
    }
}

loc_801F192C:
{
    // inline leaf 0x801F3EAC (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    // end of inlined leaf 0x801F3EAC
}

loc_801F1930:
{
    r3 = 21;
    goto loc_801F198C;
}

loc_801F1938:
{
    r0 = MemoryInline::FlatRead16((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F1940:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1964;
    }
}

loc_801F1944:
{
    r0 = MemoryInline::FlatRead32(r30);
    r4 = 0x80360000u;
    r4 = (r4 + -23936);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32(r30, r0);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 2), static_cast<uint16_t>(r0));
}

loc_801F1964:
{
    r4 = MemoryInline::FlatRead16((r30 + 16));
    r3 = 0x80360000u;
    r3 = (r3 + -23936);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & 524280);
    r4 = (r4 + -1);
    r5 = 0;
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r4));
    r4 = (r3 + r0);
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 8), r5);
}

loc_801F198C:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F1754 func_801F1754 preserves=true fpr_mask=0x00000000
