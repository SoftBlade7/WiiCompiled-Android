#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051C270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_8051C270;

loc_8051C270:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80520000u;
    r5 = 0x80520000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -15500);
    r5 = (r5 + -15564);
    r6 = 12;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r7 = 5;
    r3 = (r3 + 104);
    ctx->lr = 0x8051C2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    r0 = MemoryInline::FlatRead8((r31 + 192));
    r3 = 0;
    r4 = 0x808B0000u;
    MemoryInline::FlatWrite8((r31 + 174), static_cast<uint8_t>(r3));
}

loc_8051C2B8:
{
    r4 = (r4 + 11588);
    MemoryInline::FlatWrite32((r31 + 164), r4);
    MemoryInline::FlatWrite16((r31 + 168), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 170), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r31 + 172), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 195), static_cast<uint8_t>(r3));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8051C2DC;
    }
}

loc_8051C2D4:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r31 + 192), static_cast<uint8_t>(r0));
}

loc_8051C2DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 193));
}

loc_8051C2E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_8051C2F0;
    }
}

loc_8051C2E8:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r31 + 193), static_cast<uint8_t>(r0));
}

loc_8051C2F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 194));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8051C2F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051C304;
    }
}

loc_8051C2FC:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r31 + 194), static_cast<uint8_t>(r0));
}

loc_8051C304:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 192), static_cast<uint8_t>(r0));
    r3 = r31;
    MemoryInline::FlatWrite8((r31 + 193), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 194), static_cast<uint8_t>(r0));
    ctx->lr = 0x8051C31Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C4A0u>(ctx);
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
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051C270 func_8051C270 preserves=true fpr_mask=0x00000000
