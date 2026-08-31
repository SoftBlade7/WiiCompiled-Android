#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A4C08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A4C08;

loc_805A4C08:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r29 + 156));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    r31 = 0x809C0000u;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = MemoryInline::FlatRead8((r29 + 156));
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    r4 = MemoryInline::FlatRead32((r29 + 140));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead32((r4 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_805A4C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A4C70;
    }
}

loc_805A4C60:
{
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_805A4C6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A4C7C;
    }
}

loc_805A4C70:
{
    r3 = r30;
    r4 = r29;
    // inline leaf 0x80590DF8 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // end of inlined leaf 0x80590DF8
}

loc_805A4C7C:
{
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r4 = 0x808B0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 19440));
    r0 = (r4 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805927D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r4 + 28432));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A4CAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A4CB8;
    }
}

loc_805A4CB0:
{
    MemoryInline::FlatWrite32((r29 + 392), r3);
    goto loc_805A4CC0;
}

loc_805A4CB8:
{
    r0 = (r3 + 16);
    MemoryInline::FlatWrite32((r29 + 392), r0);
}

loc_805A4CC0:
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

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A4C08 func_805A4C08 preserves=true fpr_mask=0x00000000
