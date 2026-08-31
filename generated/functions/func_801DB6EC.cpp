#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DB6EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DB6EC;

loc_801DB6EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DB708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB77C;
    }
}

loc_801DB70C:
{
    r3 = MemoryInline::FlatRead32((r3 + 152));
    ctx->lr = 0x801DB714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB718:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB770;
    }
}

loc_801DB71C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB768;
    }
}

loc_801DB724:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB72Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DB730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB750;
    }
}

loc_801DB734:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB744;
    }
}

loc_801DB738:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DB73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB750;
    }
}

loc_801DB740:
{
    goto loc_801DB760;
}

loc_801DB744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DB748:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB760;
    }
}

loc_801DB74C:
{
    goto loc_801DB758;
}

loc_801DB750:
{
    r3 = -46;
    goto loc_801DB794;
}

loc_801DB758:
{
    r3 = -38;
    goto loc_801DB794;
}

loc_801DB760:
{
    r3 = -21;
    goto loc_801DB794;
}

loc_801DB768:
{
    r3 = -21;
    goto loc_801DB794;
}

loc_801DB770:
{
    MemoryInline::FlatWrite32(r31, r3);
    r3 = 0;
    goto loc_801DB794;
}

loc_801DB77C:
{
    r3 = (r3 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8019BF4Cu>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB788:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB794;
    }
}

loc_801DB790:
{
    r3 = -21;
}

loc_801DB794:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DB6EC func_801DB6EC preserves=true fpr_mask=0x00000000
