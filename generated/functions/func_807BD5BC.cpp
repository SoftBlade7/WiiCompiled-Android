#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD5BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BD5BC;

loc_807BD5BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_807BD5E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BD5F0;
    }
}

loc_807BD5E8:
{
    r3 = 1;
    goto loc_807BD6CC;
}

loc_807BD5F0:
{
    r4 = r31;
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
}

loc_807BD5FC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(3))) {
        goto loc_807BD678;
    }
}

loc_807BD600:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_807BD608:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_807BD678;
    }
}

loc_807BD60C:
{
    r6 = MemoryInline::FlatRead32((r30 + -10456));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r6 + 536));
    r4 = (r4 + -1);
}

loc_807BD620:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(4))) {
        goto loc_807BD638;
    }
}

loc_807BD624:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 25);
}

loc_807BD630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BD638;
    }
}

loc_807BD634:
{
    r5 = 0;
}

loc_807BD638:
{
}

loc_807BD63C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_807BD678;
    }
}

loc_807BD640:
{
    r4 = MemoryInline::FlatRead32((r6 + 776));
    r5 = 1;
    r4 = (r4 + -1);
}

loc_807BD650:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(4))) {
        goto loc_807BD668;
    }
}

loc_807BD654:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 25);
}

loc_807BD660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BD668;
    }
}

loc_807BD664:
{
    r5 = 0;
}

loc_807BD668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807BD66C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BD678;
    }
}

loc_807BD670:
{
    r3 = 0;
    goto loc_807BD6CC;
}

loc_807BD678:
{
    r4 = 0x809C0000u;
    r5 = 1;
    r0 = (r31 * 240);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r6 = 1;
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = (r4 + -1);
}

loc_807BD69C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(4))) {
        goto loc_807BD6B4;
    }
}

loc_807BD6A0:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 25);
}

loc_807BD6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807BD6B4;
    }
}

loc_807BD6B0:
{
    r6 = 0;
}

loc_807BD6B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807BD6B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BD6C8;
    }
}

loc_807BD6BC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807BD6C8;
    }
}

loc_807BD6C4:
{
    r5 = 0;
}

loc_807BD6C8:
{
    r3 = r5;
}

loc_807BD6CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BD5BC func_807BD5BC preserves=true fpr_mask=0x00000000
