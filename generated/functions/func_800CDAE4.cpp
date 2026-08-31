#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CDAE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800CDAE4;

loc_800CDAE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CDAF0:
{
    r4 = -65536;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r4 + -32464);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 7;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CDB1C;
    }
}

loc_800CDB14:
{
    r3 = 0;
    goto loc_800CDBF0;
}

loc_800CDB1C:
{
    r4 = 0x80270000u;
    r5 = r29;
    r4 = (r4 + 23044);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CDB34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r29 + 8);
}

loc_800CDB3C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(28))) {
        goto loc_800CDBE0;
    }
}

loc_800CDB40:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 23072);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800CDB58u:
        goto loc_800CDB58;
        break;
    case 0x800CDB60u:
        goto loc_800CDB60;
        break;
    case 0x800CDB68u:
        goto loc_800CDB68;
        break;
    case 0x800CDB70u:
        goto loc_800CDB70;
        break;
    case 0x800CDB78u:
        goto loc_800CDB78;
        break;
    case 0x800CDBE0u:
        goto loc_800CDBE0;
        break;
    case 0x800CDB80u:
        goto loc_800CDB80;
        break;
    case 0x800CDB8Cu:
        goto loc_800CDB8C;
        break;
    case 0x800CDB94u:
        goto loc_800CDB94;
        break;
    case 0x800CDB9Cu:
        goto loc_800CDB9C;
        break;
    case 0x800CDBA4u:
        goto loc_800CDBA4;
        break;
    case 0x800CDBACu:
        goto loc_800CDBAC;
        break;
    case 0x800CDBB4u:
        goto loc_800CDBB4;
        break;
    case 0x800CDBBCu:
        goto loc_800CDBBC;
        break;
    case 0x800CDBC4u:
        goto loc_800CDBC4;
        break;
    case 0x800CDBCCu:
        goto loc_800CDBCC;
        break;
    case 0x800CDBD4u:
        goto loc_800CDBD4;
        break;
    case 0x800CDBDCu:
        goto loc_800CDBDC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800CDB58:
{
    r31 = (r31 + -800);
    goto loc_800CDBE0;
}

loc_800CDB60:
{
    r31 = (r31 + -810);
    goto loc_800CDBE0;
}

loc_800CDB68:
{
    r31 = (r31 + -840);
    goto loc_800CDBE0;
}

loc_800CDB70:
{
    r31 = (r31 + -820);
    goto loc_800CDBE0;
}

loc_800CDB78:
{
    r31 = (r31 + -830);
    goto loc_800CDBE0;
}

loc_800CDB80:
{
    r30 = 9;
    r31 = (r31 + -1);
    goto loc_800CDBE0;
}

loc_800CDB8C:
{
    r31 = (r31 + -840);
    goto loc_800CDBE0;
}

loc_800CDB94:
{
    r31 = (r31 + -850);
    goto loc_800CDBE0;
}

loc_800CDB9C:
{
    r31 = (r31 + -30);
    goto loc_800CDBE0;
}

loc_800CDBA4:
{
    r31 = (r31 + -50);
    goto loc_800CDBE0;
}

loc_800CDBAC:
{
    r31 = (r31 + -20);
    goto loc_800CDBE0;
}

loc_800CDBB4:
{
    r31 = (r31 + -860);
    goto loc_800CDBE0;
}

loc_800CDBBC:
{
    r31 = (r31 + -870);
    goto loc_800CDBE0;
}

loc_800CDBC4:
{
    r31 = (r31 + -880);
    goto loc_800CDBE0;
}

loc_800CDBCC:
{
    r31 = (r31 + -890);
    goto loc_800CDBE0;
}

loc_800CDBD4:
{
    r31 = (r31 + -900);
    goto loc_800CDBE0;
}

loc_800CDBDC:
{
    r31 = (r31 + -910);
}

loc_800CDBE0:
{
    r3 = r30;
    r4 = r31;
    // inline leaf 0x800CCC68 (6 guest instruction(s))
}

loc_inl0_0x800CCC68:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_inl0_0x800CCC70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CCC74:
{
    MemoryInline::FlatWrite32((r13 + -26968), r3);
    MemoryInline::FlatWrite32((r13 + -26964), r4);
    goto loc_inl0_cont_800CCC68;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CCC68:
{
    // end of inlined leaf 0x800CCC68
    r3 = r29;
}

loc_800CDBF0:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CDAE4 func_800CDAE4 preserves=true fpr_mask=0x00000000
