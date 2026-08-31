#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801ABD70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r4_not_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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
    uint32_t r8_subfc_sub_0 = 0;
    uint32_t r8_subfc_sub_1 = 0;
    uint32_t r8_subfc_sub_2 = 0;
    uint32_t r8_subfc_sub_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801ABD70;

loc_801ABD70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80340000u;
    r31 = (r31 + 32608);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r13 + -25248));
    MemoryInline::FlatWrite32((r13 + -25236), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801ABDA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ABDB0;
    }
}

loc_801ABDA4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25244), r0);
    goto loc_801AC204;
}

loc_801ABDB0:
{
    r0 = MemoryInline::FlatRead32((r13 + -25240));
}

loc_801ABDB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801ABFD0;
    }
}

loc_801ABDBC:
{
    r0 = MemoryInline::FlatRead32((r13 + -28944));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_801ABDC4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801ABFBC;
    }
}

loc_801ABDC8:
{
    r4 = 0x802A0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -14204);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801ABDE0u:
        goto loc_801ABDE0;
        break;
    case 0x801ABDECu:
        goto loc_801ABDEC;
        break;
    case 0x801ABE68u:
        goto loc_801ABE68;
        break;
    case 0x801ABEACu:
        goto loc_801ABEAC;
        break;
    case 0x801ABED4u:
        goto loc_801ABED4;
        break;
    case 0x801ABEE0u:
        goto loc_801ABEE0;
        break;
    case 0x801ABF68u:
        goto loc_801ABF68;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801ABDE0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABDEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-10));
}

loc_801ABDF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801ABE28;
    }
}

loc_801ABDF4:
{
    r0 = 1;
    r3 = (r31 + 128);
    MemoryInline::FlatWrite32((r13 + -25240), r0);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r3 = 0x80000000u;
    r7 = 0x801B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r3 = (r31 + 128);
    r7 = (r7 + -17052);
    r5 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
    ctx->lr = 0x801ABE24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801AC204;
}

loc_801ABE28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801ABE2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801ABE54;
    }
}

loc_801ABE30:
{
    r0 = MemoryInline::FlatRead32((r13 + -25256));
}

loc_801ABE38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801ABE48;
    }
}

loc_801ABE3C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABE48:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABE54:
{
    r3 = 1;
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -25252), r3);
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801AC204;
}

loc_801ABE68:
{
}

loc_801ABE6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(128))) {
        goto loc_801ABE98;
    }
}

loc_801ABE70:
{
    r4 = (r31 + 0);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r4 + 96));
    r0 = 3;
    r4 = MemoryInline::FlatRead32((r4 + 100));
    MemoryInline::FlatWrite32((r13 + -25256), r5);
    MemoryInline::FlatWrite32((r13 + -25228), r4);
    MemoryInline::FlatWrite32((r13 + -25232), r3);
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABE98:
{
    r3 = 1;
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -25252), r3);
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABEAC:
{
}

loc_801ABEB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801ABEC0;
    }
}

loc_801ABEB4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABEC0:
{
    r3 = 1;
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -25252), r3);
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABED4:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABEE0:
{
}

loc_801ABEE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(128))) {
        goto loc_801ABF54;
    }
}

loc_801ABEE8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = 0x80000000u;
    r8 = MemoryInline::FlatRead32((r13 + -25228));
    r0 = MemoryInline::FlatRead32((r5 + 248));
    r5 = 300;
    r9 = MemoryInline::FlatRead32((r13 + -25232));
    r8_subfc_sub_1 = r8;
    r8 = (r4 - r8_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r8_subfc_sub_1) ? 1u : 0u) << 29);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r7 = (r7_rot_1 & 1073741823);
    r6 = 0;
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r9);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    r4 = (r3 ^ -2147483648);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r5)) >> 32));
    r3 = (r6 * r5);
    r0 = (r0 + r3);
    r5 = (r7 * 300);
    r0 = (r0 ^ -2147483648);
    r3 = (r5 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r4_not_1 = ~(r4);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r4_not_1 + r0);
    r4 = (r4 + r4_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4_not_2 = ~(r0);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r0);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (0 - r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801ABF48;
    }
}

loc_801ABF3C:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABF48:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABF54:
{
    r3 = 1;
    r0 = 6;
    MemoryInline::FlatWrite32((r13 + -25252), r3);
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABF68:
{
    r0 = MemoryInline::FlatRead32((r13 + -25252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801ABF70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801ABF80;
    }
}

loc_801ABF74:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801AC204;
}

loc_801ABF80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801ABF84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801ABFA8;
    }
}

loc_801ABF88:
{
    r4 = (r31 + 0);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r4 + 96));
    r4 = MemoryInline::FlatRead32((r4 + 100));
    MemoryInline::FlatWrite32((r13 + -25232), r3);
    MemoryInline::FlatWrite32((r13 + -25228), r4);
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    goto loc_801ABFD0;
}

loc_801ABFA8:
{
    r3 = 7;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -28944), r3);
    MemoryInline::FlatWrite32((r13 + -25252), r0);
    goto loc_801AC204;
}

loc_801ABFBC:
{
    r3 = 7;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -28944), r3);
    MemoryInline::FlatWrite32((r13 + -25252), r0);
    goto loc_801AC204;
}

loc_801ABFD0:
{
    r0 = MemoryInline::FlatRead32((r13 + -28944));
    r29 = 0;
    MemoryInline::FlatWrite32((r13 + -25240), r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801ABFE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC080;
    }
}

loc_801ABFE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC000;
    }
}

loc_801ABFE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801ABFEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC038;
    }
}

loc_801ABFF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC05C;
    }
}

loc_801ABFF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801ABFF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC010;
    }
}

loc_801ABFFC:
{
    goto loc_801AC12C;
}

loc_801AC000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801AC004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC114;
    }
}

loc_801AC008:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC12C;
    }
}

loc_801AC00C:
{
    goto loc_801AC0BC;
}

loc_801AC010:
{
    r3 = 0x802A0000u;
    r6 = 0x801B0000u;
    r3 = (r3 + -14248);
    r4 = (r31 + 176);
    r6 = (r6 + -17040);
    r7 = (r31 + 316);
    r5 = 3;
    ctx->lr = 0x801AC030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019C918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_801AC12C;
}

loc_801AC038:
{
    r6 = 0x801B0000u;
    r3 = (r31 + 176);
    r4 = (r31 + 0);
    r7 = (r31 + 316);
    r6 = (r6 + -17040);
    r5 = 128;
    ctx->lr = 0x801AC054u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019B80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_801AC12C;
}

loc_801AC05C:
{
    r6 = 0x801B0000u;
    r3 = (r31 + 176);
    r6 = (r6 + -17040);
    r7 = (r31 + 316);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801AC078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019BA04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_801AC12C;
}

loc_801AC080:
{
    r3 = (r31 + 128);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r3 = 0x80000000u;
    r0 = 60;
    r3 = MemoryInline::FlatRead32((r3 + 248));
    r7 = 0x801B0000u;
    r4 = (r29 * r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r5 = (r5_rot_1 & 1073741823);
    r3 = (r31 + 128);
    r7 = (r7 + -17052);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r6 = (r5 * 60);
    r5 = (r0 + r4);
    ctx->lr = 0x801AC0B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801AC12C;
}

loc_801AC0BC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = (r31 + 0);
    r0 = 31;
    MemoryInline::FlatWriteRam32((r5 + 100), r4);
    r6 = (r5 + 4);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r5 + 96), r3);
    ctr = r0;
}

loc_801AC0DC:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + 4);
    r4 = (r4 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801AC0DC;
    }
}

loc_801AC0EC:
{
    r6 = 0x801B0000u;
    MemoryInline::FlatWriteRam32(r31, r4);
    r3 = (r31 + 176);
    r4 = (r31 + 0);
    r6 = (r6 + -17040);
    r7 = (r31 + 316);
    r5 = 128;
    ctx->lr = 0x801AC10Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019B8ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_801AC12C;
}

loc_801AC114:
{
    r4 = 0x801B0000u;
    r3 = (r31 + 176);
    r4 = (r4 + -17040);
    r5 = (r31 + 316);
    ctx->lr = 0x801AC128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
}

loc_801AC12C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801AC130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC200;
    }
}

loc_801AC134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-3));
}

loc_801AC138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AC170;
    }
}

loc_801AC13C:
{
    r3 = (r31 + 128);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r3 = 0x80000000u;
    r7 = 0x801B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r3 = (r31 + 128);
    r7 = (r7 + -17052);
    r5 = 0;
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_2 & 1073741823);
    ctx->lr = 0x801AC164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25240), r0);
    goto loc_801AC200;
}

loc_801AC170:
{
    r0 = MemoryInline::FlatRead32((r13 + -28944));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -25252), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801AC180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC1F8;
    }
}

loc_801AC184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC194;
    }
}

loc_801AC188:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801AC18C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC19C;
    }
}

loc_801AC190:
{
    goto loc_801AC1F8;
}

loc_801AC194:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801AC198:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AC1F8;
    }
}

loc_801AC19C:
{
    r0 = 6;
    r4 = 0x801B0000u;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
    r3 = (r31 + 176);
    r4 = (r4 + -17040);
    r5 = (r31 + 316);
    ctx->lr = 0x801AC1B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801AC1BC:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AC200;
    }
}

loc_801AC1C4:
{
    r0 = 1;
    r3 = (r31 + 128);
    MemoryInline::FlatWrite32((r13 + -25240), r0);
    // inline leaf 0x801A0610 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x801A0610
    r3 = 0x80000000u;
    r7 = 0x801B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r3 = (r31 + 128);
    r7 = (r7 + -17052);
    r5 = 0;
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_3 & 1073741823);
    ctx->lr = 0x801AC1F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801AC200;
}

loc_801AC1F8:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -28944), r0);
}

loc_801AC200:
{
    MemoryInline::FlatWrite32((r13 + -25236), r30);
}

loc_801AC204:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801ABD70 func_801ABD70 preserves=true fpr_mask=0x00000000
