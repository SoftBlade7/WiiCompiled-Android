#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80062050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80062050;

loc_80062050:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80062064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800620B0;
    }
}

loc_80062068:
{
    // inline leaf 0x80050B90 (7 guest instruction(s))
}

loc_inl0_0x80050B90:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x80050B98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80050BA4;
    }
}

loc_inl0_0x80050B9C:
{
    r3 = MemoryInline::FlatRead8(r3);
    goto loc_inl0_cont_80050B90;
}

loc_inl0_0x80050BA4:
{
    r3 = 0;
}

loc_inl0_cont_80050B90:
{
    // end of inlined leaf 0x80050B90
    r0 = MemoryInline::FlatRead32((r13 + -27304));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80062074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006208C;
    }
}

loc_80062078:
{
    r4 = (r13 + -27304);
    r0 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80062088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800620B0;
    }
}

loc_8006208C:
{
    r0 = MemoryInline::FlatRead32((r13 + -27304));
    r4 = (r13 + -27304);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    r3 = (r3 & 255);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r13 + -27304), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172858u>(ctx);
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
}

loc_800620B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80062050 func_80062050 preserves=true fpr_mask=0x00000000
