#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BA88C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805BA88C;

loc_805BA88C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r31 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805BA8AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA8B8;
    }
}

loc_805BA8B0:
{
    r0 = 0;
    goto loc_805BA950;
}

loc_805BA8B8:
{
    r7 = 0x808B0000u;
    r0 = 100;
    r7 = (r7 + 29604);
    r3 = r31;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805BA8F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA8FC;
    }
}

loc_805BA8F4:
{
    r0 = 0;
    goto loc_805BA950;
}

loc_805BA8FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r31));
}

loc_805BA900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA910;
    }
}

loc_805BA904:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805BA90C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA94C;
    }
}

loc_805BA910:
{
    r4 = 0x80890000u;
    r5 = (r1 + 24);
    r4 = (r4 + 10184);
    r4 = (r4 + 53);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805BA92Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = -1;
    r4 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r3 ^ r0);
    r0 = (r4 ^ r0);
    r0 = (r3 | r0);
    r3 = (r0 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r3);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    goto loc_805BA950;
}

loc_805BA94C:
{
    r0 = 0;
}

loc_805BA950:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BA954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA970;
    }
}

loc_805BA958:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 0;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    goto loc_805BA978;
}

loc_805BA970:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r4 = MemoryInline::FlatRead32((r1 + 28));
}

loc_805BA978:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BA88C func_805BA88C preserves=true fpr_mask=0x00000000
