#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80176D84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80176D84;

loc_80176D84:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r6 = MemoryInline::FlatRead32((r4 + 18744));
    r4 = 0x80290000u;
    r4 = (r4 + -21208);
    r3 = (r6 + 65536);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = (r3 + 17228);
    ctx->lr = 0x80176DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801245A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80176DCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80176DE0;
    }
}

loc_80176DD0:
{
    r3 = (r1 + 8);
    // inline leaf 0x80124CC0 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x80124CC0
    r31 = r3;
    goto loc_80176DE4;
}

loc_80176DE0:
{
    r31 = 0;
}

loc_80176DE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80176DE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176EAC;
    }
}

loc_80176DEC:
{
    r3 = r29;
    ctx->lr = 0x80176DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80176924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = 0x80340000u;
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 18744));
    r4 = r31;
    r7 = 0;
    r6 = (r5 + 65536);
    r5 = MemoryInline::FlatRead32((r6 + 18100));
    r6 = MemoryInline::FlatRead32((r6 + 18104));
    ctx->lr = 0x80176E18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80176E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(23));
}

loc_80176E28:
{
    MemoryInline::FlatWrite32((r30 + 11816), r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80176E4C;
    }
}

loc_80176E30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80176E40;
    }
}

loc_80176E34:
{
}

loc_80176E38:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(4))) {
        goto loc_80176E4C;
    }
}

loc_80176E3C:
{
    goto loc_80176E60;
}

loc_80176E40:
{
}

loc_80176E44:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(25))) {
        goto loc_80176E4C;
    }
}

loc_80176E48:
{
    goto loc_80176E60;
}

loc_80176E4C:
{
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 18744));
    r4 = (r3 + 65536);
    r4 = (r4 + 17212);
    goto loc_80176E70;
}

loc_80176E60:
{
    r3 = 0x80340000u;
    r3 = MemoryInline::FlatRead32((r3 + 18744));
    r4 = (r3 + 65536);
    r4 = (r4 + 17204);
}

loc_80176E70:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80176E78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80176E94;
    }
}

loc_80176E7C:
{
    MemoryInline::FlatWrite32(r4, r30);
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r30);
    MemoryInline::FlatWrite32((r30 + 11808), r0);
    MemoryInline::FlatWrite32((r30 + 11812), r0);
    goto loc_80176EAC;
}

loc_80176E94:
{
    MemoryInline::FlatWrite32((r3 + 11808), r30);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r30 + 11812), r3);
    MemoryInline::FlatWrite32((r30 + 11808), r0);
    MemoryInline::FlatWrite32((r4 + 4), r30);
}

loc_80176EAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80176D84 func_80176D84 preserves=true fpr_mask=0x00000000
