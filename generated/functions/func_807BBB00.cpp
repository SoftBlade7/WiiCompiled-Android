#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BBB00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_807BBB7C_loc_0 = 0;
    uint32_t addr_lbzux_807BBB8C_loc_0 = 0;
    uint32_t addr_lbzux_807BBB9C_loc_0 = 0;
    uint32_t addr_lbzux_807BBBAC_loc_0 = 0;
    uint32_t addr_lbzux_807BBC0C_loc_0 = 0;
    uint32_t addr_lbzux_807BBC1C_loc_0 = 0;
    uint32_t addr_lbzux_807BBC2C_loc_0 = 0;
    uint32_t addr_lbzux_807BBCA8_loc_0 = 0;
    uint32_t addr_lbzux_807BBCB8_loc_0 = 0;
    uint32_t addr_lbzux_807BBCC8_loc_0 = 0;
    uint32_t addr_lbzux_807BBCD8_loc_0 = 0;
    uint32_t addr_lbzux_807BBD14_loc_0 = 0;
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BBB00;

loc_807BBB00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 1;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 25688);
    r3 = MemoryInline::FlatRead32((r30 + -10440));
    r5 = (r29 + 255);
    ctx->lr = 0x807BBB3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BBB40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BBB48;
    }
}

loc_807BBB44:
{
    goto loc_807BBB5C;
}

loc_807BBB48:
{
    r3 = MemoryInline::FlatRead32((r30 + -10440));
    r5 = (r29 + 287);
    r4 = 0;
    r6 = 0;
    ctx->lr = 0x807BBB5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807BBB5C:
{
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r8 = (r3 + 3);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3 = r31;
    r5 = (r31 + 32);
    r6 = 1;
    r0 = (r0 * r4);
    r7 = 1;
    addr_lbzux_807BBB7C_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBB7C_loc_0);
    r8 = addr_lbzux_807BBB7C_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBB8C_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBB8C_loc_0);
    r8 = addr_lbzux_807BBB8C_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBB9C_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBB9C_loc_0);
    r8 = addr_lbzux_807BBB9C_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBBAC_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBBAC_loc_0);
    r8 = addr_lbzux_807BBBAC_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    r4 = (r8 + r0);
    ctx->lr = 0x807BBBC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x809C0000u;
    r4 = r3;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2936));
}

loc_807BBBD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807BBC78;
    }
}

loc_807BBBDC:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + 14521));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BBBE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BBC48;
    }
}

loc_807BBBEC:
{
    r4 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3 = r31;
    r5 = (r31 + 16);
    r6 = 1;
    r0 = (r0 * r4);
    r7 = 0;
    addr_lbzux_807BBC0C_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBC0C_loc_0);
    r8 = addr_lbzux_807BBC0C_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBC1C_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBC1C_loc_0);
    r8 = addr_lbzux_807BBC1C_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBC2C_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBC2C_loc_0);
    r8 = addr_lbzux_807BBC2C_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    r4 = (r8 + r0);
    ctx->lr = 0x807BBC44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807BBD44;
}

loc_807BBC48:
{
    r3 = r31;
    r5 = (r31 + 16);
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x807BBC5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r31;
    r5 = (r31 + 24);
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x807BBC74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807BBD44;
}

loc_807BBC78:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r4 + 14521));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BBC84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BBCF4;
    }
}

loc_807BBC88:
{
    r4 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3 = r31;
    r5 = (r31 + 16);
    r6 = 1;
    r0 = (r0 * r4);
    r7 = 0;
    addr_lbzux_807BBCA8_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBCA8_loc_0);
    r8 = addr_lbzux_807BBCA8_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBCB8_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBCB8_loc_0);
    r8 = addr_lbzux_807BBCB8_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBCC8_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBCC8_loc_0);
    r8 = addr_lbzux_807BBCC8_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    addr_lbzux_807BBCD8_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBCD8_loc_0);
    r8 = addr_lbzux_807BBCD8_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    r4 = (r8 + r0);
    ctx->lr = 0x807BBCF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807BBD44;
}

loc_807BBCF4:
{
    r4 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3 = r31;
    r5 = (r31 + 16);
    r6 = 1;
    r0 = (r0 * r4);
    r7 = 0;
    addr_lbzux_807BBD14_loc_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead8(addr_lbzux_807BBD14_loc_0);
    r8 = addr_lbzux_807BBD14_loc_0;
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r8 = (r8 + 2);
    r0 = (r0 * r4);
    r4 = (r8 + r0);
    ctx->lr = 0x807BBD2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r31;
    r5 = (r31 + 24);
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x807BBD44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA9D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807BBD44:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807BBB00 func_807BBB00 preserves=true fpr_mask=0x00000000
