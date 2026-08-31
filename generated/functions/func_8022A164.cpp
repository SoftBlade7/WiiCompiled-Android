#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022A164(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022A164;

loc_8022A164:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8022A170:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r4 * 12);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8022A1C4;
    }
}

loc_8022A19C:
{
    r4 = 0x80230000u;
    r4 = (r4 + -23788);
    MemoryInline::FlatWrite32((r3 + 236), r4);
    r4 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 232));
    r0 = (r0 | 1);
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 232), r0);
    // inline leaf 0x8006DCF0 (9 guest instruction(s))
}

loc_inl0_0x8006DCF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x8006DCF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl0_0x8006DD00;
    }
}

loc_inl0_0x8006DCF8:
{
    r4 = 0;
    goto loc_inl0_0x8006DD0C;
}

loc_inl0_0x8006DD00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_inl0_0x8006DD04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8006DD0C;
    }
}

loc_inl0_0x8006DD08:
{
    r4 = 255;
}

loc_inl0_0x8006DD0C:
{
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r4));
}

loc_inl0_cont_8006DCF0:
{
    // end of inlined leaf 0x8006DCF0
    goto loc_8022A1E8;
}

loc_8022A1C4:
{
    r4 = 0x80230000u;
    r4 = (r4 + -23788);
    MemoryInline::FlatWrite32((r3 + 236), r4);
    r4 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 232));
    r0 = (r0 & -2);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 232), r0);
    // inline leaf 0x8006DD20 (9 guest instruction(s))
}

loc_inl1_0x8006DD20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x8006DD24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x8006DD30;
    }
}

loc_inl1_0x8006DD28:
{
    r4 = 0;
    goto loc_inl1_0x8006DD3C;
}

loc_inl1_0x8006DD30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_inl1_0x8006DD34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x8006DD3C;
    }
}

loc_inl1_0x8006DD38:
{
    r4 = 255;
}

loc_inl1_0x8006DD3C:
{
    MemoryInline::FlatWrite8((r3 + 209), static_cast<uint8_t>(r4));
}

loc_inl1_cont_8006DD20:
{
    // end of inlined leaf 0x8006DD20
}

loc_8022A1E8:
{
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r30));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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

// RECOMP_GUEST_ABI gpr_read=0xE000007B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022A164 func_8022A164 preserves=true fpr_mask=0x00000000
