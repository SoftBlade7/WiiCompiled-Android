#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80206244(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80206244;

loc_80206244:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80207CFC (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    r3 = 0;
    // end of inlined leaf 0x80207CFC
    r3 = 0x80360000u;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + -20912);
    r4 = 1;
    r3 = (r3 + 12);
    goto loc_802062B0;
}

loc_80206278:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
}

loc_80206280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802062A8;
    }
}

loc_80206284:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8020628C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_802062A8;
    }
}

loc_80206290:
{
    r0 = (r4 * 12);
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    goto loc_802062B8;
}

loc_802062A8:
{
    r3 = (r3 + 12);
    r4 = (r4 + 1);
}

loc_802062B0:
{
}

loc_802062B4:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_80206278;
    }
}

loc_802062B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_802062BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206370;
    }
}

loc_802062C0:
{
    r3 = 0x80360000u;
    r4 = 1;
    r3 = (r3 + -20912);
    r3 = (r3 + 8);
    goto loc_80206300;
}

loc_802062D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r0 & 1);
}

loc_802062DC:
{
    MemoryInline::FlatWrite32((r3 + 64), r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802062F8;
    }
}

loc_802062E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
}

loc_802062EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_802062F8;
    }
}

loc_802062F0:
{
    r0 = 1;
    goto loc_8020630C;
}

loc_802062F8:
{
    r3 = (r3 + 8);
    r4 = (r4 + 1);
}

loc_80206300:
{
}

loc_80206304:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_802062D4;
    }
}

loc_80206308:
{
    r0 = 0;
}

loc_8020630C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206310:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206370;
    }
}

loc_80206314:
{
    r3 = 0x80360000u;
    r4 = 1;
    r3 = (r3 + -20912);
    r3 = (r3 + 12);
    goto loc_80206368;
}

loc_80206328:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206360;
    }
}

loc_80206334:
{
    r6 = (r4 * 12);
    r5 = 0x80360000u;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (r5 + -20912);
    r5_addr_1 = (r5 + r6);
    r4 = MemoryInline::FlatRead32(r5_addr_1);
    r3 = (r5 + r6);
    r4 = (r4 | 1);
    r5_addr_2 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_2, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    goto loc_80206370;
}

loc_80206360:
{
    r3 = (r3 + 12);
    r4 = (r4 + 1);
}

loc_80206368:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_8020636C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206328;
    }
}

loc_80206370:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    MemoryInline::FlatWriteRam32((r3 + 8), r31);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80206244 func_80206244 preserves=true fpr_mask=0x00000000
