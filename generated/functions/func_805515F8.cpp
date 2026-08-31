#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805515F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805515F8;

loc_805515F8:
{
    r3 = 0x809C0000u;
    r3 = (r3 + -5376);
    r0 = MemoryInline::FlatRead32((r3 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551608:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551650;
    }
}

loc_8055160C:
{
    r0 = MemoryInline::FlatRead8((r3 + 164));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80551614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551620;
    }
}

loc_80551618:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8055161C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551650;
    }
}

loc_80551620:
{
    r5 = 0x809C0000u;
    r3 = 2;
    r5 = (r5 + -5376);
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWriteRam8((r5 + 164), static_cast<uint8_t>(r3));
    r3 = 1;
    MemoryInline::FlatWriteRam32((r5 + 208), r4);
    MemoryInline::FlatWriteRam32((r5 + 212), r4);
    MemoryInline::FlatWriteRam32((r5 + 204), r0);
    MemoryInline::FlatWriteRam32((r5 + 200), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80551650:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805515F8 func_805515F8 preserves=true fpr_mask=0x00000000
