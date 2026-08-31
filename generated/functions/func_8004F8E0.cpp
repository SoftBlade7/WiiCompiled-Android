#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F8E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004F8E0;

loc_8004F8E0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8004F8E8:
{
    r5 = (r3 + 24);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F95C;
    }
}

loc_8004F8F0:
{
}

loc_8004F8F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8004F920;
    }
}

loc_8004F8F8:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F90C;
    }
}

loc_8004F904:
{
    r3 = (r5 + r0);
    goto loc_8004F910;
}

loc_8004F90C:
{
    r3 = 0;
}

loc_8004F910:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = (r3 + 32);
    r4 = (r4 + -32);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8004F920:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F934;
    }
}

loc_8004F92C:
{
    r6 = (r5 + r0);
    goto loc_8004F938;
}

loc_8004F934:
{
    r6 = 0;
}

loc_8004F938:
{
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r3 = -872349696;
    r4 = 64;
    r0 = (r6 + 32);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4 = (r5 + -32);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8004F95C:
{
}

loc_8004F960:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8004F984;
    }
}

loc_8004F964:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F96C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F978;
    }
}

loc_8004F970:
{
    r3 = (r5 + r0);
    goto loc_8004F97C;
}

loc_8004F978:
{
    r3 = 0;
}

loc_8004F97C:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8004F984:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004F98C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004F998;
    }
}

loc_8004F990:
{
    r4 = (r5 + r0);
    goto loc_8004F99C;
}

loc_8004F998:
{
    r4 = 0;
}

loc_8004F99C:
{
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r3 = -872349696;
    r0 = 64;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F8E0 func_8004F8E0 preserves=true fpr_mask=0x00000000
