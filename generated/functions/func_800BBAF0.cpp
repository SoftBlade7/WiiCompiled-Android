#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BBAF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BBAF0;

loc_800BBAF0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r13 + -26992));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BBB30;
    }
}

loc_800BBB08:
{
    r3 = (r13 + -27004);
    // inline leaf 0x800AF540 (4 guest instruction(s))
    r4 = 0x80270000u;
    r4 = (r4 + 19500);
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x800AF540
    r4 = 0x800B0000u;
    r5 = 0x802F0000u;
    r4 = (r4 + -2736);
    r3 = (r13 + -27004);
    r5 = (r5 + 4912);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -26992), static_cast<uint8_t>(r0));
}

loc_800BBB30:
{
    r0 = MemoryInline::FlatRead8((r13 + -26991));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BBB64;
    }
}

loc_800BBB3C:
{
    r3 = (r13 + -26996);
    // inline leaf 0x800AF9F0 (4 guest instruction(s))
    r4 = 0x80270000u;
    r4 = (r4 + 19480);
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x800AF9F0
    r4 = 0x800B0000u;
    r5 = 0x802F0000u;
    r4 = (r4 + -1536);
    r3 = (r13 + -26996);
    r5 = (r5 + 4924);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -26991), static_cast<uint8_t>(r0));
}

loc_800BBB64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BBAF0 func_800BBAF0 preserves=true fpr_mask=0x00000000
