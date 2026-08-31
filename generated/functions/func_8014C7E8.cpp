#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014C7E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8014C7E8;

loc_8014C7E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = (r6 + 23888);
    r0 = r4;
    r7 = MemoryInline::FlatRead16((r4 + 2));
    r5 = MemoryInline::FlatRead16((r6 + 126));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
}

loc_8014C80C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8014C84C;
    }
}

loc_8014C810:
{
    r4 = MemoryInline::FlatRead16((r3 + 54));
    r6 = 0x80340000u;
    r5 = MemoryInline::FlatRead16((r3 + 56));
    r6 = (r6 + -27840);
    r7 = (r4 + -1);
    r4 = 8448;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 54), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r5));
    r3 = r0;
    r5 = MemoryInline::FlatRead16((r6 + 4));
    r0 = (r5 + -1);
    MemoryInline::FlatWriteRam16((r6 + 4), static_cast<uint16_t>(r0));
    ctx->lr = 0x8014C848u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x801315A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8014C8DC;
}

loc_8014C84C:
{
    r8 = MemoryInline::FlatRead16((r6 + 124));
    r5 = 0x80340000u;
    r5 = (r5 + -27840);
    r6 = (r7 + r8);
    r7 = MemoryInline::FlatRead16((r5 + 4));
    r5 = (r6 + -5);
    r5 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r8));
    r8 = (r5 & 65535);
}

loc_8014C870:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(r7))) {
        goto loc_8014C884;
    }
}

loc_8014C874:
{
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r7));
    r5 = 1;
    r8 = r7;
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r5));
}

loc_8014C884:
{
    r6 = MemoryInline::FlatRead16((r3 + 54));
    r5 = (r8 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_8014C890:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8014C8A4;
    }
}

loc_8014C894:
{
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r6));
    r4 = 1;
    r8 = r6;
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
}

loc_8014C8A4:
{
    r6 = 0x80340000u;
    r4 = 8448;
    r6 = (r6 + -27840);
    r5 = MemoryInline::FlatRead16((r6 + 4));
    r5 = (r5 - r8);
    MemoryInline::FlatWriteRam16((r6 + 4), static_cast<uint16_t>(r5));
    r6 = MemoryInline::FlatRead16((r3 + 54));
    r5 = MemoryInline::FlatRead16((r3 + 56));
    r6 = (r6 - r8);
    r5 = (r5 + r8);
    MemoryInline::FlatWrite16((r3 + 54), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r5));
    r3 = r0;
    ctx->lr = 0x8014C8DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x801315A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8014C8DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = 1;
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x800011FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8014C7E8 func_8014C7E8 preserves=true fpr_mask=0x00000000
