#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B86A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B86A8;

loc_805B86A8:
{
    r0 = 4;
    r7 = 0;
    r6 = r4;
    r8 = 0;
    ctr = r0;
}

loc_805B86BC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805B86C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B86DC;
    }
}

loc_805B86C8:
{
    r0 = (r7 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 140));
    r0 = (r0 * 48);
    r7 = (r7 + 1);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r6);
}

loc_805B86DC:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r6 = (r6 + 24);
}

loc_805B86E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8700;
    }
}

loc_805B86EC:
{
    r0 = (r7 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 140));
    r0 = (r0 * 48);
    r7 = (r7 + 1);
    r5_addr_4 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_4, r6);
}

loc_805B8700:
{
    r0 = MemoryInline::FlatRead16((r4 + 48));
    r6 = (r6 + 24);
}

loc_805B870C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8724;
    }
}

loc_805B8710:
{
    r0 = (r7 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 140));
    r0 = (r0 * 48);
    r7 = (r7 + 1);
    r5_addr_6 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_6, r6);
}

loc_805B8724:
{
    r0 = MemoryInline::FlatRead16((r4 + 72));
    r6 = (r6 + 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B8730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B8748;
    }
}

loc_805B8734:
{
    r0 = (r7 & 65535);
    r5 = MemoryInline::FlatRead32((r3 + 140));
    r0 = (r0 * 48);
    r7 = (r7 + 1);
    r5_addr_8 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_8, r6);
}

loc_805B8748:
{
    r4 = (r4 + 96);
    r6 = (r6 + 24);
    r8 = (r8 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805B86BC;
    }
}

loc_805B8758:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B883Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B86A8 func_805B86A8 preserves=true fpr_mask=0x00000000
