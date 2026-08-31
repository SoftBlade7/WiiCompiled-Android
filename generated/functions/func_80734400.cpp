#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80734400(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80734400;

loc_80734400:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 408));
    r30 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r31 = r3;
    r3 = r30;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8051EA60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = MemoryInline::FlatRead32((r29 + 412));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80734444:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073445C;
    }
}

loc_80734448:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8073444C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734478;
    }
}

loc_80734450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80734454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734484;
    }
}

loc_80734458:
{
    goto loc_807344E0;
}

loc_8073445C:
{
    r3 = MemoryInline::FlatRead32((r29 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r3 = MemoryInline::FlatRead32((r29 + 412));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 412), r0);
    goto loc_807344E0;
}

loc_80734478:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 412), r0);
    goto loc_807344E0;
}

loc_80734484:
{
    r3 = 0x809C0000u;
    r0 = (r31 & 255);
    r4 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r0 * 584);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 200));
}

loc_807344A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_807344BC;
    }
}

loc_807344AC:
{
    r0 = MemoryInline::FlatRead8((r4 + 520));
}

loc_807344B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807344BC;
    }
}

loc_807344B8:
{
    r3 = 1;
}

loc_807344BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807344C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807344D4;
    }
}

loc_807344C4:
{
    r3 = r29;
    r4 = (r29 + 100);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_807344E0;
}

loc_807344D4:
{
    r3 = r29;
    r4 = (r29 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_807344E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80734400 func_80734400 preserves=true fpr_mask=0x00000000
