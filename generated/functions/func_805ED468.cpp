#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ED468(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805ED468;

loc_805ED468:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_805ED488:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(69))) {
        goto loc_805ED494;
    }
}

loc_805ED48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(70));
}

loc_805ED490:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805ED4A0;
    }
}

loc_805ED494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(71));
}

loc_805ED498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ED4B0;
    }
}

loc_805ED49C:
{
    goto loc_805ED4C8;
}

loc_805ED4A0:
{
    r4 = 65;
    r5 = 0;
    ctx->lr = 0x805ED4ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_805ED4C8;
}

loc_805ED4B0:
{
    r4 = 71;
    r5 = 0;
    ctx->lr = 0x805ED4BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635A3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9000));
    // inline leaf 0x806F90B8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806F90B8
}

loc_805ED4C8:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80635AC8u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
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

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805ED468 func_805ED468 preserves=true fpr_mask=0x00000000
