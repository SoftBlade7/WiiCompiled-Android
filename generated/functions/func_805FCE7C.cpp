#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FCE7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805FCE7C;

loc_805FCE7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FCE98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FD094;
    }
}

loc_805FCE9C:
{
    ctx->lr = 0x805FCEA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80529C4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r31 + 244));
}

loc_805FCEA8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_805FCF58;
    }
}

loc_805FCEAC:
{
    r0 = MemoryInline::FlatRead32((r31 + 172));
}

loc_805FCEB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805FCEC4;
    }
}

loc_805FCEB8:
{
}

loc_805FCEBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_805FCEEC;
    }
}

loc_805FCEC0:
{
    goto loc_805FCF44;
}

loc_805FCEC4:
{
    r3 = MemoryInline::FlatRead32((r31 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805FCECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FCEE0;
    }
}

loc_805FCED0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805FCEE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805FCEE0:
{
    r3 = r31;
    ctx->lr = 0x805FCEE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80529EECu>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805FCF44;
}

loc_805FCEEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 236));
    r3 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 244), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FCEFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FCF14;
    }
}

loc_805FCF00:
{
    r0 = MemoryInline::FlatRead32((r31 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_805FCF08:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805FCF14;
    }
}

loc_805FCF0C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 244), r0);
}

loc_805FCF14:
{
    r3 = r31;
    ctx->lr = 0x805FCF1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052A024u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 244));
    r0 = MemoryInline::FlatRead32((r31 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_805FCF28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FCF44;
    }
}

loc_805FCF2C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = r31;
    r4 = (r31 + r0);
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 200));
    ctx->lr = 0x805FCF44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80529E00u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805FCF44:
{
    r3 = r31;
    r4 = (r31 + 180);
    // inline leaf 0x8052A04C (19 guest instruction(s))
}

loc_inl0_0x8052A04C:
{
    r5 = 0x809C0000u;
    r5 = (r5 + -5376);
    r5 = MemoryInline::FlatRead32((r5 + 248));
}

loc_inl0_0x8052A05C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8052A090;
    }
}

loc_inl0_0x8052A060:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 1;
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_8052A04C;
}

loc_inl0_0x8052A090:
{
    r3 = 0;
}

loc_inl0_cont_8052A04C:
{
    // end of inlined leaf 0x8052A04C
    MemoryInline::FlatWrite8((r31 + 196), static_cast<uint8_t>(r3));
    goto loc_805FCFD0;
}

loc_805FCF58:
{
    r3 = MemoryInline::FlatRead32((r31 + 232));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 196), static_cast<uint8_t>(r0));
}

loc_805FCF68:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_805FCFD0;
    }
}

loc_805FCF6C:
{
    r0 = MemoryInline::FlatRead32((r31 + 172));
}

loc_805FCF74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805FCFB4;
    }
}

loc_805FCF78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805FCF7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FCF9C;
    }
}

loc_805FCF80:
{
    r0 = MemoryInline::FlatRead8((r31 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FCF88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FCF94;
    }
}

loc_805FCF8C:
{
    r5 = 0;
    goto loc_805FCFA0;
}

loc_805FCF94:
{
    r5 = 1;
    goto loc_805FCFA0;
}

loc_805FCF9C:
{
    r5 = 0;
}

loc_805FCFA0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 244), r0);
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 200));
    ctx->lr = 0x805FCFB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80529E00u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805FCFB4:
{
    r0 = MemoryInline::FlatRead32((r31 + 244));
}

loc_805FCFBC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805FCFD0;
    }
}

loc_805FCFC0:
{
    r3 = r31;
    r4 = (r31 + 180);
    // inline leaf 0x8052A04C (19 guest instruction(s))
}

loc_inl1_0x8052A04C:
{
    r5 = 0x809C0000u;
    r5 = (r5 + -5376);
    r5 = MemoryInline::FlatRead32((r5 + 248));
}

loc_inl1_0x8052A05C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8052A090;
    }
}

loc_inl1_0x8052A060:
{
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 1;
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_8052A04C;
}

loc_inl1_0x8052A090:
{
    r3 = 0;
}

loc_inl1_cont_8052A04C:
{
    // end of inlined leaf 0x8052A04C
    MemoryInline::FlatWrite8((r31 + 196), static_cast<uint8_t>(r3));
}

loc_805FCFD0:
{
    r0 = MemoryInline::FlatRead8((r31 + 196));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FCFD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FD08C;
    }
}

loc_805FCFDC:
{
    r5 = MemoryInline::FlatRead16((r31 + 194));
    r6 = 5;
    r3 = 0;
    r4 = 0;
    r0 = (r5 + -8);
    r5 = 0;
    r8 = (r0 & 65535);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & -1073741824);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_4 & 16383);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r7 = (r7 - r8);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -1);
    r7 = (r7 + r8);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r12 = (r12_rot_1 & -8);
    ctr = r6;
}

loc_805FD018:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & 4080);
    r7 = MemoryInline::FlatRead16((r31 + 192));
    r6 = (r6 + 8);
    r8 = (r6 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
}

loc_805FD02C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805FD084;
    }
}

loc_805FD030:
{
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_4 & 8191);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r6 = (r6_rot_3 & -536870912);
    r10 = (r7 * r0);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r11 = MemoryInline::FlatRead32((r31 + 180));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & 262112);
    r7 = (r6 - r9);
    r6 = (r3 & 255);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(5));
    r10 = (r10_rot_2 & -32);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_5 & -1);
    r10 = (r12 + r10);
    r9 = (r7 + r9);
    r7 = (r11 + r10);
    r7 = (r9 + r7);
    r8_addr_2 = (r8 + r7);
    r7 = MemoryInline::FlatRead8(r8_addr_2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_805FD070:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805FD07C;
    }
}

loc_805FD074:
{
    r4 = (r5 & 255);
    r3 = r7;
}

loc_805FD07C:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FD018;
    }
}

loc_805FD084:
{
    MemoryInline::FlatWrite32((r31 + 248), r4);
    goto loc_805FD094;
}

loc_805FD08C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 248), r0);
}

loc_805FD094:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FCE7C func_805FCE7C preserves=true fpr_mask=0x00000000
