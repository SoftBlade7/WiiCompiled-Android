#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072EDCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072EDCC;

loc_8072EDCC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 288));
    r4 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8072EDEC:
{
    r4 = MemoryInline::FlatRead32(r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8072EE00;
    }
}

loc_8072EDF4:
{
}

loc_8072EDF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8072EE48;
    }
}

loc_8072EDFC:
{
    goto loc_8072EE70;
}

loc_8072EE00:
{
    r3 = r4;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 140));
}

loc_8072EE28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_8072EE70;
    }
}

loc_8072EE2C:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_8072EE34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8072EE70;
    }
}

loc_8072EE38:
{
    r3 = MemoryInline::FlatRead32((r31 + 288));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 288), r0);
    goto loc_8072EE70;
}

loc_8072EE48:
{
    r6 = MemoryInline::FlatRead32((r4 + 16));
    r5 = 1;
    r4 = 0x808D0000u;
    r0 = 0;
    r6 = MemoryInline::FlatRead32((r6 + 332));
    MemoryInline::FlatWrite8((r6 + 416), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r6 + 420), r5);
    r4 = MemoryInline::FlatRead16((r4 + -23656));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWrite32((r3 + 292), r4);
    MemoryInline::FlatWrite32((r3 + 288), r0);
}

loc_8072EE70:
{
    r3 = MemoryInline::FlatRead32((r31 + 292));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072EE78:
{
    MemoryInline::FlatWrite32((r31 + 292), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072EE88;
    }
}

loc_8072EE80:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 292), r0);
}

loc_8072EE88:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8072EDCC func_8072EDCC preserves=true fpr_mask=0x00000000
