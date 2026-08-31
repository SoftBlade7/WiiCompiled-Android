#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80864CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80864CEC;

loc_80864CEC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    r26 = r3;
    r27 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864D10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864D1C;
    }
}

loc_80864D14:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864D1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1792), static_cast<uint8_t>(r0));
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 1772));
    r5 = MemoryInline::FlatRead32((r5 + -10448));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    r0 = MemoryInline::FlatRead32((r5 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864D44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864D50;
    }
}

loc_80864D48:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864D50:
{
    r0 = MemoryInline::FlatRead8((r3 + 1788));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864D58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864D64;
    }
}

loc_80864D5C:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864D64:
{
    r5 = MemoryInline::FlatRead32((r3 + 1728));
    r5 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r5 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864D84;
    }
}

loc_80864D7C:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864D84:
{
    r0 = (r5 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864D94;
    }
}

loc_80864D8C:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864D94:
{
    r0 = MemoryInline::FlatRead8((r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864D9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864DA8;
    }
}

loc_80864DA0:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864DA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1785));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864DB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864DBC;
    }
}

loc_80864DB4:
{
    r3 = 0;
    goto loc_80865038;
}

loc_80864DBC:
{
}

loc_80864DC0:
{
    r31 = -1;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(29))) {
        goto loc_80864DDC;
    }
}

loc_80864DC8:
{
}

loc_80864DCC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(30))) {
        goto loc_80864DE4;
    }
}

loc_80864DD0:
{
}

loc_80864DD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(31))) {
        goto loc_80864DEC;
    }
}

loc_80864DD8:
{
    goto loc_80864DF0;
}

loc_80864DDC:
{
    r31 = 0;
    goto loc_80864DF0;
}

loc_80864DE4:
{
    r31 = 1;
    goto loc_80864DF0;
}

loc_80864DEC:
{
    r31 = 2;
}

loc_80864DF0:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
}

loc_80864DF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864E04;
    }
}

loc_80864DFC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_80864E00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80864E3C;
    }
}

loc_80864E04:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r3 = (r1 + 8);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r26 + 308));
    ctr = r12;
    ctx->lr = 0x80864E1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 * 48);
    r3 = (r26 + r0);
    r30 = (r3 + 336);
    r3 = r30;
    ctx->lr = 0x80864E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80867194u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r3;
    goto loc_80864E64;
}

loc_80864E3C:
{
    r3 = 0x809C0000u;
    r4 = r0;
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    r5 = r31;
    // inline leaf 0x80868F1C (6 guest instruction(s))
    r4 = (r4 * 144);
    r0 = (r5 * 48);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 9288);
    // end of inlined leaf 0x80868F1C
    r0 = (r27 + -29);
    r30 = r3;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r26 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 320));
}

loc_80864E64:
{
    r3 = 0x809C0000u;
    r28 = r29;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_80864E78:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80864E84;
    }
}

loc_80864E7C:
{
}

loc_80864E80:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_80864ED4;
    }
}

loc_80864E84:
{
    r3 = 0x808B0000u;
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 228));
    r4 = (r4 + 232);
    r3 = 0;
    ctr = r0;
}

loc_80864EA0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_80864ED4;
    }
}

loc_80864EA4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80864EAC:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80864EC8;
    }
}

loc_80864EB0:
{
    r0 = (r3 * 28);
    r3 = 0x808B0000u;
    r3 = (r3 + 232);
    r3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_80864ED4;
}

loc_80864EC8:
{
    r4 = (r4 + 28);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80864EA4;
    }
}

loc_80864ED4:
{
    r0 = MemoryInline::FlatRead8((r26 + 1787));
}

loc_80864EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80864EEC;
    }
}

loc_80864EE0:
{
    r0 = MemoryInline::FlatRead32((r26 + 284));
    r0 = (r0 * 118);
    r29 = (r29 + r0);
}

loc_80864EEC:
{
    r0 = MemoryInline::FlatRead32((r26 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80864EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864F10;
    }
}

loc_80864EF8:
{
    r12 = MemoryInline::FlatRead32(r26);
    r3 = r26;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80864F10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80864F10:
{
    r3 = 0x809C0000u;
    r5 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r4 = (r26 + 248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x80864F30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80864F34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80864F44;
    }
}

loc_80864F38:
{
    r0 = (r26 + 248);
    MemoryInline::FlatWrite32((r26 + 316), r0);
    goto loc_80864F4C;
}

loc_80864F44:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 316), r0);
}

loc_80864F4C:
{
    r6 = MemoryInline::FlatRead32((r26 + 316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80864F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865034;
    }
}

loc_80864F58:
{
    r3 = r26;
    r4 = r29;
    r5 = r27;
    r7 = 0;
    r8 = 1;
    r9 = 1;
    ctx->lr = 0x80864F74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808656CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80864F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864F8C;
    }
}

loc_80864F7C:
{
    r3 = r30;
    r4 = r28;
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x808674CCu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_80864F8C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r26 + 1772));
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    r5 = r31;
    r6 = r28;
    // inline leaf 0x8086906C (6 guest instruction(s))
    r4 = (r4 * 12);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16216), r6);
    // end of inlined leaf 0x8086906C
    r0 = MemoryInline::FlatRead16((r26 + 156));
}

loc_80864FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(23))) {
        goto loc_80864FF0;
    }
}

loc_80864FB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(29));
}

loc_80864FB4:
{
    r4 = 3947;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864FC8;
    }
}

loc_80864FBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(31));
}

loc_80864FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80864FD0;
    }
}

loc_80864FC4:
{
    goto loc_80864FD4;
}

loc_80864FC8:
{
    r4 = 3946;
    goto loc_80864FD4;
}

loc_80864FD0:
{
    r4 = 3948;
}

loc_80864FD4:
{
    r12 = MemoryInline::FlatRead32(r26);
    r5 = 0x808B0000u;
    r3 = r26;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -1200));
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80864FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80864FF0:
{
    r0 = MemoryInline::FlatRead8((r26 + 1773));
    r27 = MemoryInline::FlatRead32((r26 + 316));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80864FFC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80865024;
    }
}

loc_80865000:
{
    r3 = 0x809C0000u;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead32((r3 + 8984));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F6BECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086501C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865024;
    }
}

loc_80865020:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
}

loc_80865024:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1785), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80865038;
}

loc_80865034:
{
    r3 = 0;
}

loc_80865038:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80864CEC func_80864CEC preserves=true fpr_mask=0x00000000
