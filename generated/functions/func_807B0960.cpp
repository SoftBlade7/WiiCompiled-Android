#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B0960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B0960;

loc_807B0960:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B0980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B09A4;
    }
}

loc_807B0984:
{
    r0 = MemoryInline::FlatRead32((r4 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_807B098C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B09A4;
    }
}

loc_807B0990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_807B0994:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B09A4;
    }
}

loc_807B0998:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B09A4;
    }
}

loc_807B099C:
{
    r0 = 20;
    MemoryInline::FlatWrite32((r4 + 120), r0);
}

loc_807B09A4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079DD70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B0960 func_807B0960 preserves=true fpr_mask=0x00000000
