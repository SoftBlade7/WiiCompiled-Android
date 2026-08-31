#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80020638(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80020638;

loc_80020638:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r7 = (r7 + 25912);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 12), 0, 16u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r7 + 12));
    r0 = (r29 + -208);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80020664:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002078C;
    }
}

loc_80020668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(210));
}

loc_8002066C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002069C;
    }
}

loc_80020670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(211));
}

loc_80020674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800206E8;
    }
}

loc_80020678:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(212));
}

loc_8002067C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020728;
    }
}

loc_80020680:
{
    r3 = (r1 + 16);
    r4 = 4;
    // inline leaf 0x8001EC84 (6 guest instruction(s))
    r5 = 0;
    r0 = -1;
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x8001EC84
    r3 = (r1 + 16);
    ctx->lr = 0x80020694u;
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
    InvokeDirectCpu<0x8001EBB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_80020810;
}

loc_8002069C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 20));
    r6 = (r1 + 12);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 16));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 24));
    r4 = (r0 & 255);
    ctx->lr = 0x800206B4u;
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
    InvokeDirectCpu<0x8001F274u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800206C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800206D4;
    }
}

loc_800206C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800206C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800206D4;
    }
}

loc_800206CC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_800206D4:
{
    r3 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 + 25912);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    goto loc_800207F8;
}

loc_800206E8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 16));
    r4 = (r1 + 12);
    ctx->lr = 0x800206F4u;
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
    InvokeDirectCpu<0x8001F38Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80020700:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80020714;
    }
}

loc_80020704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80020708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020714;
    }
}

loc_8002070C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_80020714:
{
    r3 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 + 25912);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    goto loc_800207F8;
}

loc_80020728:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 20));
    r4 = (r1 + 8);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 24));
    r6 = (r1 + 12);
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r5 = (r0 & 255);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 16));
    ctx->lr = 0x8002074Cu;
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
    InvokeDirectCpu<0x8001F470u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80020758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002076C;
    }
}

loc_8002075C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80020760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002076C;
    }
}

loc_80020764:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8002076C:
{
    r3 = 0x802A0000u;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 + 25912);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_800207F8;
}

loc_8002078C:
{
    r0 = (r29 + -209);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 20));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r7 + 16));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 24));
    r5 = r30;
    r6 = (r1 + 12);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 134217727);
    r7 = 1;
    ctx->lr = 0x800207B4u;
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
    InvokeDirectCpu<0x8001EF58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r31 = r3;
}

loc_800207C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800207D4;
    }
}

loc_800207C4:
{
}

loc_800207C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800207D4;
    }
}

loc_800207CC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_800207D4:
{
    r3 = 0x802A0000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(209));
}

loc_800207DC:
{
    r3 = (r3 + 25912);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800207F8;
    }
}

loc_800207EC:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r4 = MemoryInline::FlatRead32(r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CA0Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800207F8:
{
    r5 = 0x802A0000u;
    r3 = r31;
    r5 = (r5 + 25912);
    r4 = MemoryInline::FlatRead32((r5 + 128));
    r0 = (r4 + 4);
    MemoryInline::FlatWriteRam32((r5 + 128), r0);
}

loc_80020810:
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
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80020638 func_80020638 preserves=true fpr_mask=0x00000000
