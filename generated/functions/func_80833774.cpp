#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833774(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80833774;

loc_80833774:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80833780:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808337A0;
    }
}

loc_80833798:
{
    r3 = 9999;
    goto loc_80833804;
}

loc_808337A0:
{
    // inline leaf 0x805275EC (6 guest instruction(s))
}

loc_inl0_0x805275EC:
{
    r0 = (r3 + -24);
    r3 = 0;
}

loc_inl0_0x805275F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805275FC:
{
    r3 = 1;
    goto loc_inl0_cont_805275EC;
}

loc_inl0_return:
{
}

loc_inl0_cont_805275EC:
{
    // end of inlined leaf 0x805275EC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808337A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808337B4;
    }
}

loc_808337AC:
{
    r3 = (r30 + 9000);
    goto loc_80833804;
}

loc_808337B4:
{
    r0 = (r30 + -24);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_808337BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80833800;
    }
}

loc_808337C0:
{
    r3 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -29528);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x808337D8u:
        goto loc_808337D8;
        break;
    case 0x808337ECu:
        goto loc_808337EC;
        break;
    case 0x80833800u:
        goto loc_80833800;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_808337D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_808337DC:
{
    r3 = 9052;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80833804;
    }
}

loc_808337E4:
{
    r3 = 9050;
    goto loc_80833804;
}

loc_808337EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_808337F0:
{
    r3 = 9053;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80833804;
    }
}

loc_808337F8:
{
    r3 = 9051;
    goto loc_80833804;
}

loc_80833800:
{
    r3 = -1;
}

loc_80833804:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80833774 func_80833774 preserves=true fpr_mask=0x00000000
