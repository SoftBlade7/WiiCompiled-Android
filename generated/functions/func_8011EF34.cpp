#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011EF34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011EF34;

loc_8011EF34:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    r5 = 0x80270000u;
    r4 = -1664090112;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r5 = (r5 + 4424);
    r7 = (r3 + 12);
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 156), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r5 + 56));
    r5 = (r4 + -27879);
    goto loc_8011EFA0;
}

loc_8011EF68:
{
    r4 = (r8 * r5);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = 0;
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_8011EF80;
    }
}

loc_8011EF78:
{
}

loc_8011EF7C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(256))) {
        goto loc_8011EF84;
    }
}

loc_8011EF80:
{
    r0 = 1;
}

loc_8011EF84:
{
}

loc_8011EF88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011EF90;
    }
}

loc_8011EF8C:
{
    goto loc_8011EF98;
}

loc_8011EF90:
{
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r3_addr_2 = (r3 + r8);
    r8 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_8011EF98:
{
    r8 = (r4 + r8);
    r7 = (r7 + 1);
}

loc_8011EFA0:
{
    r3 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011EF68;
    }
}

loc_8011EFAC:
{
    r3 = -858980352;
    r4 = MemoryInline::FlatRead32((r13 + -26560));
    r0 = (r3 + -13107);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r8)) >> 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8011EFC0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 268435455);
    r0 = (r0 * 20);
    r6 = (r8 - r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011EFDC;
    }
}

loc_8011EFD0:
{
    r3 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8011EFF4;
}

loc_8011EFDC:
{
    r4 = 0x80280000u;
    r3 = (r1 + 16);
    r5 = (r31 + 12);
    r4 = (r4 + -8664);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8011EFF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8011EFF4:
{
    r0 = 2;
    r3 = 28910;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    r3 = (r1 + 16);
    ctx->lr = 0x8011F010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F14E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 65536);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_8011F01C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011F04C;
    }
}

loc_8011F020:
{
    r3 = (r1 + 16);
    ctx->lr = 0x8011F028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F164Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011F02C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011F038;
    }
}

loc_8011F030:
{
    r3 = 2;
    goto loc_8011F0AC;
}

loc_8011F038:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r1 + 12);
    r5 = 4;
    r4 = MemoryInline::FlatRead32(r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8011F04C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1716));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8011F054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011F07C;
    }
}

loc_8011F058:
{
    r3 = 2;
    r4 = 1;
    r5 = 6;
    ctx->lr = 0x8011F068u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F118Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8011F06C:
{
    MemoryInline::FlatWrite32((r31 + 1716), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011F07C;
    }
}

loc_8011F074:
{
    r3 = 1;
    goto loc_8011F0AC;
}

loc_8011F07C:
{
    r4 = (r1 + 8);
    r5 = 8;
    ctx->lr = 0x8011F088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F12A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011F08C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011F0A8;
    }
}

loc_8011F090:
{
    r3 = MemoryInline::FlatRead32((r31 + 1716));
    ctx->lr = 0x8011F098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F11C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = -1;
    r3 = 3;
    MemoryInline::FlatWrite32((r31 + 1716), r0);
    goto loc_8011F0AC;
}

loc_8011F0A8:
{
    r3 = 0;
}

loc_8011F0AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r31 = MemoryInline::FlatRead32((r1 + 156));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011EF34 func_8011EF34 preserves=true fpr_mask=0x00000000
