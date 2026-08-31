#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80287078(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80287078;

loc_80287078:
{
    r0 = MemoryInline::FlatRead32((r21 + 9476));
    r0 = MemoryInline::FlatRead32((r21 + 9480));
    r0 = MemoryInline::FlatRead32((r21 + 9484));
    r0 = MemoryInline::FlatRead32((r21 + 9488));
    r0 = MemoryInline::FlatRead32((r21 + 9492));
    r0 = MemoryInline::FlatRead32((r21 + 9496));
    r0 = MemoryInline::FlatRead32((r21 + 9500));
    r6 = (r19 & 25439);
}

loc_80287098:
{
    r24 = (r11 ^ 1601372160);
    r31 = (r10 ^ 1936982016);
    r20 = (r11 | 25951);
    r4 = (r11 ^ 27749);
    r1 = (8293 - r13);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8293) >= static_cast<uint32_t>(r13) ? 1u : 0u) << 29);
    r20 = (r19 & 975503360);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_802870B0:
{
    r0 = (r0 | 0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[20] = r20;
    ctx->gpr[24] = r24;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00282C01 gpr_write=0x81100053 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80287078 func_80287078 preserves=true fpr_mask=0x00000000
