#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DDA6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DDA6C;

loc_801DDA6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r6 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDA88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDA94;
    }
}

loc_801DDA8C:
{
    r0 = (r6 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDA9C;
    }
}

loc_801DDA94:
{
    r3 = -7;
    goto loc_801DDB20;
}

loc_801DDA9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801DDAA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDAB0;
    }
}

loc_801DDAA4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDAB8;
    }
}

loc_801DDAB0:
{
    r3 = -5;
    goto loc_801DDB20;
}

loc_801DDAB8:
{
    r0 = (r6 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DDABC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DDAC8;
    }
}

loc_801DDAC0:
{
    r3 = -4;
    goto loc_801DDB20;
}

loc_801DDAC8:
{
    r6 = MemoryInline::FlatRead8((r3 + 200));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
}

loc_801DDAD0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DDADC;
    }
}

loc_801DDAD4:
{
    r3 = -6;
    goto loc_801DDB20;
}

loc_801DDADC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(256));
}

loc_801DDAE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DDAEC;
    }
}

loc_801DDAE4:
{
    r3 = -8;
    goto loc_801DDB20;
}

loc_801DDAEC:
{
    r4_addr_1 = (r4 + r5);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DDB00;
    }
}

loc_801DDAF8:
{
    r3 = -25;
    goto loc_801DDB20;
}

loc_801DDB00:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r3 = (r3 + r0);
    r3 = (r3 + 136);
    // inline leaf 0x801DC9BC (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x801DC9BC
    r4 = MemoryInline::FlatRead8((r31 + 200));
    r3 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 200), static_cast<uint8_t>(r0));
}

loc_801DDB20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000005B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DDA6C func_801DDA6C preserves=true fpr_mask=0x00000000
