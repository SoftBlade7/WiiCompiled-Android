#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A8DD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A8DD4;

loc_801A8DD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A8DE0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A907C;
    }
}

loc_801A8DF4:
{
}

loc_801A8DF8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801A8F28;
    }
}

loc_801A8DFC:
{
    r8 = 0x80340000u;
    r8 = (r8 + 29760);
    r3 = MemoryInline::FlatRead8((r8 + 19));
    r0 = (r3 & 3);
}

loc_801A8E10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_801A8E1C;
    }
}

loc_801A8E14:
{
    r0 = (r3 & 252);
    MemoryInline::FlatWriteRam8((r8 + 19), static_cast<uint8_t>(r0));
}

loc_801A8E1C:
{
    r3 = 0x80340000u;
    r0 = 0;
    r3 = (r3 + 29760);
    r7 = (r8 + 12);
    r5 = (r3 + 20);
    MemoryInline::FlatWriteRam16((r8 + 2), static_cast<uint16_t>(r0));
    r3 = (r5 + 1);
    r3 = (r3 - r7);
}

loc_801A8E40:
{
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_801A8F28;
    }
}

loc_801A8E4C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
}

loc_801A8E50:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A8EF8;
    }
}

loc_801A8E58:
{
    r6 = MemoryInline::FlatRead16(r8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r7);
    r5 = MemoryInline::FlatRead16((r8 + 2));
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
    r6 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r7);
    r0 = ~(r0 | r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r8 + 2), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r7 + 2));
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
    r6 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r7 + 2));
    r0 = ~(r0 | r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r8 + 2), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
    r6 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r0 = ~(r0 | r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r8 + 2), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r7 = (r7 + 8);
    r0 = ~(r0 | r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r8 + 2), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A8E58;
    }
}

loc_801A8EF0:
{
    r3 = (r3 & 3);
}

loc_801A8EF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A8F28;
    }
}

loc_801A8EF8:
{
    ctr = r3;
}

loc_801A8EFC:
{
    r6 = MemoryInline::FlatRead16(r8);
    r0 = MemoryInline::FlatRead16(r7);
    r5 = MemoryInline::FlatRead16((r8 + 2));
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam16(r8, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r7);
    r7 = (r7 + 2);
    r0 = ~(r0 | r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r8 + 2), static_cast<uint16_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A8EFC;
    }
}

loc_801A8F28:
{
    r3 = 0x80340000u;
    r3 = (r3 + 29760);
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_801A8F38:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_801A8F40;
    }
}

loc_801A8F3C:
{
    MemoryInline::FlatWriteRam32((r3 + 64), r4);
}

loc_801A8F40:
{
    r4 = 0x80340000u;
    r4 = (r4 + 29760);
    r0 = MemoryInline::FlatRead32((r4 + 64));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_801A8F50:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A8F78;
    }
}

loc_801A8F54:
{
    r3 = MemoryInline::FlatRead16((r4 + 60));
    r0 = (r3 & 31744);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20480));
}

loc_801A8F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A8F70;
    }
}

loc_801A8F64:
{
    r0 = (r3 & 192);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(192));
}

loc_801A8F6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A8F78;
    }
}

loc_801A8F70:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r4 + 60), static_cast<uint16_t>(r0));
}

loc_801A8F78:
{
    r6 = 0x80340000u;
    r5 = 0x801B0000u;
    r6 = (r6 + 29760);
    r3 = 0;
    r31 = MemoryInline::FlatRead32((r6 + 64));
    r5 = (r5 + -30052);
    r4 = 1;
    r29 = (64 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(64) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r30 = (r6 + r31);
    ctx->lr = 0x801A8FA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80169164u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_801A8FA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801A8FB0;
    }
}

loc_801A8FA8:
{
    r0 = 0;
    goto loc_801A9060;
}

loc_801A8FB0:
{
    r3 = 0;
    r4 = 1;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x801689D0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A8FC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A8FD8;
    }
}

loc_801A8FC8:
{
    r3 = 0;
    ctx->lr = 0x801A8FD0u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80169260u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    goto loc_801A9060;
}

loc_801A8FD8:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
    r3 = (r3_rot_3 & -64);
    r4 = (r1 + 8);
    r0 = (r3 + 256);
    r5 = 4;
    r0 = (r0 | -1610612736);
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = 1;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->xer = xer;
    InvokeDirectCpu<0x80167F68u>(ctx);
    r3 = ctx->gpr[3];
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = 0;
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_1 & 134217727);
    ctx->lr = 0x801A9010u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80168380u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r4 = r30;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r5 = r29;
    r29 = (r31 | r0);
    r3 = 0;
    r6 = 1;
    ctx->lr = 0x801A9030u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801681E4u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = 0;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    r29 = (r29 | r0);
    ctx->lr = 0x801A9044u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80168B00u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
    r29 = (r29 | r0);
    ctx->lr = 0x801A9058u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80169260u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r29));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
}

loc_801A9060:
{
    r3 = 0x80340000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A9068:
{
    r3 = (r3 + 29760);
    MemoryInline::FlatWriteRam32((r3 + 76), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A907C;
    }
}

loc_801A9074:
{
    r0 = 64;
    MemoryInline::FlatWriteRam32((r3 + 64), r0);
}

loc_801A907C:
{
    r31 = 0x80340000u;
    r0 = 0;
    r31 = (r31 + 29760);
    MemoryInline::FlatWriteRam32((r31 + 72), r0);
    r3 = MemoryInline::FlatRead32((r31 + 68));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 76));
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A8DD4 func_801A8DD4 preserves=true fpr_mask=0x00000000
