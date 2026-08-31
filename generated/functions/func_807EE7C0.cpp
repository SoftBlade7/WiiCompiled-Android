#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EE7C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807EE7C0;

loc_807EE7C0:
{
    r6 = MemoryInline::FlatRead16((r4 + 8));
    r7 = 0;
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r8 = 0;
    r0 = (r6 + r0);
    r9 = (r0 & 65535);
}

loc_807EE7DC:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(999))) {
        goto loc_807EE7EC;
    }
}

loc_807EE7E0:
{
    r0 = (r9 + -1000);
    r8 = 1;
    r9 = (r0 & 65535);
}

loc_807EE7EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
    r6 = MemoryInline::FlatRead8((r5 + 6));
    r0 = (r8 + r0);
    r0 = (r6 + r0);
    r8 = (r0 & 255);
}

loc_807EE804:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(59))) {
        goto loc_807EE814;
    }
}

loc_807EE808:
{
    r0 = (r8 + -60);
    r7 = 1;
    r8 = (r0 & 255);
}

loc_807EE814:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r7 + r0);
    r0 = (r4 + r0);
    r7 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(999));
}

loc_807EE82C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807EE83C;
    }
}

loc_807EE830:
{
    r7 = 999;
    r8 = 59;
    r9 = 999;
}

loc_807EE83C:
{
    r4 = 0x808B0000u;
    r0 = 1;
    r4 = (r4 + 11588);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r9));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003B9 gpr_write=0x000003D1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807EE7C0 func_807EE7C0 preserves=true fpr_mask=0x00000000
