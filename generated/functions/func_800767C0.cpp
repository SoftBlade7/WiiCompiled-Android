#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800767C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800767C0;

loc_800767C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32(r6);
    r27 = r3;
    r31 = r5;
    r30 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800767E8:
{
    r28 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800767F8;
    }
}

loc_800767F0:
{
    r3 = 0;
    goto loc_800768C4;
}

loc_800767F8:
{
}

loc_800767FC:
{
    r29 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8007680C;
    }
}

loc_80076804:
{
    r0 = 240;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8007680C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80076810:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800768C0;
    }
}

loc_80076814:
{
    r3 = r27;
    r4 = 240;
    ctx->lr = 0x80076820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80076824:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80076834;
    }
}

loc_8007682C:
{
    r3 = 0;
    goto loc_800768C4;
}

loc_80076834:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800768C0;
    }
}

loc_80076838:
{
    r31 = MemoryInline::FlatRead32(r31);
    r4 = r27;
    r30 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x80076848u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8006D7B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r4 = 0x80270000u;
    r3 = 0x80270000u;
    r4 = (r4 + 12568);
    MemoryInline::FlatWrite32(r29, r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29272));
    r3 = (r3 + 13112);
    MemoryInline::FlatWriteFloat32((r29 + 220), f0.d);
}

loc_80076868:
{
    MemoryInline::FlatWriteFloat32((r29 + 224), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 228), f0.d);
    MemoryInline::FlatWrite32(r29, r3);
    MemoryInline::FlatWrite32((r29 + 232), r31);
    MemoryInline::FlatWrite32((r29 + 236), r30);
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80076890;
    }
}

loc_80076880:
{
    r0 = MemoryInline::FlatRead32((r29 + 204));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r29 + 204), r0);
    goto loc_8007689C;
}

loc_80076890:
{
    r0 = MemoryInline::FlatRead32((r29 + 204));
    r0 = (r0 & -536870913);
    MemoryInline::FlatWrite32((r29 + 204), r0);
}

loc_8007689C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800768A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800768B4;
    }
}

loc_800768A4:
{
    r0 = MemoryInline::FlatRead32((r29 + 204));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r29 + 204), r0);
    goto loc_800768C0;
}

loc_800768B4:
{
    r0 = MemoryInline::FlatRead32((r29 + 204));
    r0 = (r0 & -1073741825);
    MemoryInline::FlatWrite32((r29 + 204), r0);
}

loc_800768C0:
{
    r3 = r29;
}

loc_800768C4:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xF80018FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x800767C0 func_800767C0 preserves=true fpr_mask=0x00000000
