#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B1C78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B1C78;

loc_805B1C78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 1;
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r0 = MemoryInline::FlatRead8((r3 + 105));
}

loc_805B1C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B1CB0;
    }
}

loc_805B1C9C:
{
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r0 = MemoryInline::FlatRead8((r3 + 104));
}

loc_805B1CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B1CB0;
    }
}

loc_805B1CAC:
{
    r31 = 0;
}

loc_805B1CB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805B1CB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1CC4;
    }
}

loc_805B1CB8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 12024));
    ctx->lr = 0x805B1CC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80787774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805B1CC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B1C78 func_805B1C78 preserves=true fpr_mask=0x00000000
