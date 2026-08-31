#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020C32C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020C32C;

loc_8020C32C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208FD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_8020C340:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(26))) {
        goto loc_8020C358;
    }
}

loc_8020C344:
{
    r0 = (r3 * 20);
    r3 = 0x80380000u;
    r3 = (r3 + 12080);
    r3 = (r3 + r0);
    goto loc_8020C35C;
}

loc_8020C358:
{
    r3 = 0;
}

loc_8020C35C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020C360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020C36C;
    }
}

loc_8020C364:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8020C370;
}

loc_8020C36C:
{
    r3 = 0;
}

loc_8020C370:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020C32C func_8020C32C preserves=true fpr_mask=0x00000000
