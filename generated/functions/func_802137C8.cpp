#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802137C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802137C8;

loc_802137C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r13 + -24148));
}

loc_802137E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802138C8;
    }
}

loc_802137EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -24156));
    r0 = MemoryInline::FlatRead32((r13 + -24152));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_802137F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80213904;
    }
}

loc_802137FC:
{
    r29 = (r3 * 12);
    r30 = 0x80380000u;
    r30 = (r30 + 13312);
    r30_addr_1 = (r30 + r29);
    r0 = MemoryInline::FlatRead8(r30_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80213810:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802138A0;
    }
}

loc_80213814:
{
    r3 = (r30 + r29);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x80213820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800989D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = r29;
    // inline leaf 0x80098A70 (4 guest instruction(s))
    r0 = (r4 * 168);
    r3 = (r3 + r0);
    r3 = (r3 + 56);
    // end of inlined leaf 0x80098A70
    r31 = 0x80210000u;
    r4 = (r31 + 13996);
    ctx->lr = 0x80213834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800980A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80213838:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802138BC;
    }
}

loc_8021383C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r7 = MemoryInline::FlatRead32((r13 + -24152));
    r6 = 1;
    r5 = (r31 + 13996);
    r4 = 0;
    r8 = (r7 * 12);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite32((r13 + -24152), r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80213860:
{
    r7 = (r30 + r8);
    MemoryInline::FlatWrite32((r7 + 4), r29);
    r30_addr_2 = (r30 + r8);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r7 + 8), r5);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r4));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8021387C;
    }
}

loc_80213878:
{
    MemoryInline::FlatWrite32((r13 + -24152), r4);
}

loc_8021387C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -24152));
    r3 = 0x80380000u;
    r3 = (r3 + 13312);
    r4 = 1;
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    goto loc_802138BC;
}

loc_802138A0:
{
    ctx->lr = 0x802138A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800989D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = (r30 + r29);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    // inline leaf 0x80098A70 (4 guest instruction(s))
    r0 = (r4 * 168);
    r3 = (r3 + r0);
    r3 = (r3 + 56);
    // end of inlined leaf 0x80098A70
    r4 = 0x80210000u;
    r4 = (r4 + 14140);
    ctx->lr = 0x802138BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80098160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802138BC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -24148), static_cast<uint8_t>(r0));
    goto loc_80213904;
}

loc_802138C8:
{
    r4 = MemoryInline::FlatRead32((r13 + -24156));
    r3 = 0x80380000u;
    r3 = (r3 + 13312);
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802138E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80213904;
    }
}

loc_802138E8:
{
    r0 = (r4 + 1);
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_802138F4:
{
    MemoryInline::FlatWrite8((r13 + -24148), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r13 + -24156), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80213904;
    }
}

loc_80213900:
{
    MemoryInline::FlatWrite32((r13 + -24156), r3);
}

loc_80213904:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802137C8 func_802137C8 preserves=true fpr_mask=0x00000000
