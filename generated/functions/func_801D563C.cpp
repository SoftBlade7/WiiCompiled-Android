#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D563C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D563C;

loc_801D563C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r3 + 1);
    r3 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D5654:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_801D5658:
{
}

loc_801D565C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_801D5668;
    }
}

loc_801D5660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(57));
}

loc_801D5664:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5690;
    }
}

loc_801D5668:
{
}

loc_801D566C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_801D5678;
    }
}

loc_801D5670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801D5674:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5690;
    }
}

loc_801D5678:
{
}

loc_801D567C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_801D5688;
    }
}

loc_801D5680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(122));
}

loc_801D5684:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D5690;
    }
}

loc_801D5688:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801D568C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5698;
    }
}

loc_801D5690:
{
    r3 = (r3 + 1);
    goto loc_801D569C;
}

loc_801D5698:
{
    r3 = (r3 + 3);
}

loc_801D569C:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D5658;
    }
}

loc_801D56AC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D563C func_801D563C preserves=true fpr_mask=0x00000000
