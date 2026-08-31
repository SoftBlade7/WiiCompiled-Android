#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80198658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80198658;

loc_80198658:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    goto loc_8019875C;
}

loc_80198684:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8019868C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r28))) {
        goto loc_8019875C;
    }
}

loc_80198690:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_80198698:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_8019875C;
    }
}

loc_8019869C:
{
    r30 = 0;
    goto loc_8019872C;
}

loc_801986A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_801986AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r28))) {
        goto loc_8019872C;
    }
}

loc_801986B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_801986B8:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_8019872C;
    }
}

loc_801986BC:
{
    r31 = 0;
    goto loc_801986FC;
}

loc_801986C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_801986CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r28))) {
        goto loc_801986FC;
    }
}

loc_801986D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_801986D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801986FC;
    }
}

loc_801986DC:
{
    r4 = r28;
    r3 = (r3 + 12);
    ctx->lr = 0x801986E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801981ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_801986EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801986F4;
    }
}

loc_801986F0:
{
    goto loc_80198718;
}

loc_801986F4:
{
    r3 = r31;
    goto loc_80198718;
}

loc_801986FC:
{
    r4 = r31;
    r3 = (r30 + 12);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl0_0x80199CE4:
{
}

loc_inl0_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80199CF4;
    }
}

loc_inl0_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80199CE4;
}

loc_inl0_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_8019870C:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801986C4;
    }
}

loc_80198714:
{
    r3 = 0;
}

loc_80198718:
{
}

loc_8019871C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80198724;
    }
}

loc_80198720:
{
    goto loc_80198748;
}

loc_80198724:
{
    r3 = r30;
    goto loc_80198748;
}

loc_8019872C:
{
    r4 = r30;
    r3 = (r29 + 12);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl1_0x80199CE4:
{
}

loc_inl1_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80199CF4;
    }
}

loc_inl1_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_80199CE4;
}

loc_inl1_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
}

loc_8019873C:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801986A4;
    }
}

loc_80198744:
{
    r3 = 0;
}

loc_80198748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019874C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198754;
    }
}

loc_80198750:
{
    goto loc_80198778;
}

loc_80198754:
{
    r3 = r29;
    goto loc_80198778;
}

loc_8019875C:
{
    r4 = r29;
    r3 = (r31 + 27888);
    // inline leaf 0x80199CE4 (8 guest instruction(s))
}

loc_inl2_0x80199CE4:
{
}

loc_inl2_0x80199CE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x80199CF4;
    }
}

loc_inl2_0x80199CEC:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_80199CE4;
}

loc_inl2_0x80199CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_80199CE4:
{
    // end of inlined leaf 0x80199CE4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019876C:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80198684;
    }
}

loc_80198774:
{
    r3 = 0;
}

loc_80198778:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00007FB gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80198658 func_80198658 preserves=true fpr_mask=0x00000000
