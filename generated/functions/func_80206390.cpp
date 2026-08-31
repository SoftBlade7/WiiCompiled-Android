#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80206390(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80206390;

loc_80206390:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
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
    goto loc_802063FC;
}

loc_802063C4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
}

loc_802063CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802063F4;
    }
}

loc_802063D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_802063D8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_802063F4;
    }
}

loc_802063DC:
{
    r0 = (r4 * 12);
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_80206404;
}

loc_802063F4:
{
    r3 = (r3 + 12);
    r4 = (r4 + 1);
}

loc_802063FC:
{
}

loc_80206400:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_802063C4;
    }
}

loc_80206404:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_80206408:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802064CC;
    }
}

loc_8020640C:
{
    r3 = 0x80360000u;
    r4 = 1;
    r3 = (r3 + -20912);
    r3 = (r3 + 8);
    goto loc_8020644C;
}

loc_80206420:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r0 & 1);
}

loc_80206428:
{
    MemoryInline::FlatWrite32((r3 + 64), r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206444;
    }
}

loc_80206430:
{
    r0 = MemoryInline::FlatRead32((r3 + 68));
}

loc_80206438:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80206444;
    }
}

loc_8020643C:
{
    r0 = 1;
    goto loc_80206458;
}

loc_80206444:
{
    r3 = (r3 + 8);
    r4 = (r4 + 1);
}

loc_8020644C:
{
}

loc_80206450:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(1))) {
        goto loc_80206420;
    }
}

loc_80206454:
{
    r0 = 0;
}

loc_80206458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020645C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802064C0;
    }
}

loc_80206460:
{
    r3 = 0x80360000u;
    r4 = 1;
    r3 = (r3 + -20912);
    r3 = (r3 + 12);
    goto loc_802064B4;
}

loc_80206474:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020647C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802064AC;
    }
}

loc_80206480:
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
    r31 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_802064CC;
}

loc_802064AC:
{
    r3 = (r3 + 12);
    r4 = (r4 + 1);
}

loc_802064B4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_802064B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80206474;
    }
}

loc_802064BC:
{
    goto loc_802064CC;
}

loc_802064C0:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r31 = MemoryInline::FlatRead32((r3 + 8));
}

loc_802064CC:
{
    r3 = r31;
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
// RECOMP_REGISTRATION base 0x80206390 func_80206390 preserves=true fpr_mask=0x00000000
